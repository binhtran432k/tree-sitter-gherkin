#include "dialect.cc"
#include <cstring>
#include <tree_sitter/parser.h>

namespace {

using std::basic_string;

enum TokenType {
  EOL,
  NEXT_TOKEN,
  LANGUAGE_START,
  UNKNOWN_LANGUAGE_START,
  FEATURE_START,
  RULE_START,
  BACKGROUND_START,
  SCENARIO_START,
  SCENARIO_OUTLINE_START,
  EXAMPLES_START,
  GIVEN_START,
  WHEN_START,
  THEN_START,
  AND_START,
  BUT_START,
};

namespace serializer_utils {

inline void memcpy_and_increment(unsigned &i, void *__restrict dest,
                                 const void *__restrict src, size_t n) {
  std::memcpy(dest, src, n);
  i += n;
}

template <typename T>
inline void serialize(unsigned &i, char *buffer, const T &item) {
  memcpy_and_increment(i, &buffer[i], &item, sizeof(item));
}

template <typename T>
inline void deserialize(unsigned &i, const char *buffer, T &item) {
  memcpy_and_increment(i, &item, &buffer[i], sizeof(item));
}

}; // namespace serializer_utils

namespace ts_utils {

inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

inline bool eof(TSLexer *lexer) { return lexer->eof(lexer); }

inline void mark_end(TSLexer *lexer) { lexer->mark_end(lexer); }

inline bool eol(TSLexer *lexer) {
  return lexer->lookahead == '\r' || lexer->lookahead == '\n' || eof(lexer);
}

// Base on `StringUtilities_is_whitespace` exclude \n and \r from
// https://github.com/cucumber/gherkin/blob/main/c/src/string_utilities.c
inline bool is_nbsp(const char16_t wchar) {
  return (wchar == u' ' || wchar == u'\t' || wchar == u'\f' || wchar == u'\v' ||
          wchar == u'\u00A0' || wchar == u'\u1680' || wchar == u'\u2000' ||
          wchar == u'\u2001' || wchar == u'\u2002' || wchar == u'\u2003' ||
          wchar == u'\u2004' || wchar == u'\u2005' || wchar == u'\u2006' ||
          wchar == u'\u2007' || wchar == u'\u2008' || wchar == u'\u2009' ||
          wchar == u'\u200A' || wchar == u'\u2028' || wchar == u'\u2029' ||
          wchar == u'\u202F' || wchar == u'\u205F' || wchar == u'\u3000');
}

template <typename CharT>
inline basic_string<CharT> get_advance_by_size(TSLexer *lexer, size_t size) {
  basic_string<CharT> text;
  text.reserve(size);
  for (size_t i = 0; i < size; i++) {
    text.push_back(lexer->lookahead);
    advance(lexer);
  }
  mark_end(lexer);
  return text;
}

static void advance_by_size(TSLexer *lexer, size_t size) {
  for (size_t i = 0; i < size; i++) {
    advance(lexer);
  }
  mark_end(lexer);
}

inline void advance_nbsp(TSLexer *lexer) {
  while (is_nbsp(lexer->lookahead)) {
    advance(lexer);
  }
}

inline void skip_nbsp(TSLexer *lexer) {
  while (is_nbsp(lexer->lookahead)) {
    skip(lexer);
  }
}

template <typename CharT, typename SizeT>
inline basic_string<CharT> get_advance_line_with_limit(TSLexer *lexer,
                                                       SizeT limit) {
  basic_string<CharT> text;
  text.reserve(limit);
  for (SizeT i = 0; i < limit && !eol(lexer); i++) {
    text.push_back(lexer->lookahead);
    advance(lexer);
  }
  return text;
}

template <typename CharT>
inline bool start_with(basic_string<CharT> const &text,
                       basic_string<CharT> const &prefix) {
  if (text.size() < prefix.size())
    return false;

  for (int i = 0; i < prefix.size(); i++) {
    if (text[i] != prefix[i]) {
      return false;
    }
  }
  return true;
}

}; // namespace ts_utils

static const Dialect *const DEFAULT_DIALECT = Dialect::for_name("en");

struct Scanner {

private:
  DialectIndex language_index;
  KeywordSize next_token_size;

public:
  Scanner() { deserialize(nullptr, 0); }

  unsigned serialize(char *buffer) {
    unsigned i = 0;
    serializer_utils::serialize(i, buffer, language_index);
    serializer_utils::serialize(i, buffer, next_token_size);
    return i;
  }

  void deserialize(const char *buffer, unsigned size) {
    language_index = 0;
    next_token_size = 0;
    if (size > 0) {
      unsigned i = 0;
      serializer_utils::deserialize(i, buffer, language_index);
      serializer_utils::deserialize(i, buffer, next_token_size);
    }
  }

  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    using namespace ts_utils;
    skip_nbsp(lexer);

    mark_end(lexer);

    if (eol(lexer)) {
      if (valid_symbols[EOL]) {
        lexer->result_symbol = EOL;
        return true;
      }
      return false;
    }

    if (next_token_size > 0) {
      if (valid_symbols[NEXT_TOKEN]) {
        advance_by_size(lexer, next_token_size);
        next_token_size = 0;
        lexer->result_symbol = NEXT_TOKEN;
        return true;
      }
    }

    if (lexer->lookahead == '#') {
      if (valid_symbols[LANGUAGE_START] ||
          valid_symbols[UNKNOWN_LANGUAGE_START]) {
        return scan_language(lexer, valid_symbols);
      }
    }

    const Dialect *dialect = get_dialect();
    KeywordString line = get_advance_line_with_limit<KeywordChar>(
        lexer, dialect->max_keywords_size);
    return scan_title_keyword_start(lexer, valid_symbols, FEATURE_START, line,
                                    dialect->feature_keywords) ||
           scan_title_keyword_start(lexer, valid_symbols, RULE_START, line,
                                    dialect->rule_keywords) ||
           scan_title_keyword_start(lexer, valid_symbols, BACKGROUND_START,
                                    line, dialect->background_keywords) ||
           scan_title_keyword_start(lexer, valid_symbols, SCENARIO_START, line,
                                    dialect->scenario_keywords) ||
           scan_title_keyword_start(lexer, valid_symbols,
                                    SCENARIO_OUTLINE_START, line,
                                    dialect->scenario_outline_keywords) ||
           scan_title_keyword_start(lexer, valid_symbols, EXAMPLES_START, line,
                                    dialect->examples_keywords) ||
           scan_keyword_start(lexer, valid_symbols, GIVEN_START, line,
                              dialect->given_keywords) ||
           scan_keyword_start(lexer, valid_symbols, WHEN_START, line,
                              dialect->when_keywords) ||
           scan_keyword_start(lexer, valid_symbols, THEN_START, line,
                              dialect->then_keywords) ||
           scan_keyword_start(lexer, valid_symbols, AND_START, line,
                              dialect->and_keywords) ||
           scan_keyword_start(lexer, valid_symbols, BUT_START, line,
                              dialect->but_keywords);
  }

private:
  template <typename CharT>
  inline bool start_with_title_keyword(basic_string<CharT> const &text,
                                       basic_string<CharT> const &keyword) {
    return text.size() > keyword.size() && text[keyword.size()] == ':' &&
           ts_utils::start_with(text, keyword);
  }

  bool scan_language(TSLexer *lexer, const bool *valid_symbols) {
    using namespace ts_utils;

    if (lexer->lookahead != '#') {
      return false;
    } else {
      advance(lexer);
    }

    advance_nbsp(lexer);

    std::string language = "language";
    for (int8_t i = 0; i < 8; i++) {
      if (lexer->lookahead != language[i]) {
        return false;
      } else {
        advance(lexer);
      }
    }

    advance_nbsp(lexer);

    if (lexer->lookahead != ':') {
      return false;
    } else {
      advance(lexer);
    }

    advance_nbsp(lexer);

    LanguageString language_name;
    language_name.reserve(MAX_LANGUAGE_SIZE);
    for (LanguageSize i = 0;
         i < MAX_LANGUAGE_SIZE && !eol(lexer) && !is_nbsp(lexer->lookahead);
         i++) {
      language_name.push_back(lexer->lookahead);
      advance(lexer);
    }

    while (!eol(lexer) && !is_nbsp(lexer->lookahead)) {
      advance(lexer);
    }

    advance_nbsp(lexer);

    if (!eol(lexer)) {
      return false;
    }

    if (change_dialect(language_name)) {
      lexer->result_symbol = LANGUAGE_START;
    } else {
      lexer->result_symbol = UNKNOWN_LANGUAGE_START;
    }
    return true;
  }

  bool scan_title_keyword_start(TSLexer *lexer, const bool *valid_symbols,
                                unsigned short keyword_symbol,
                                const KeywordString &line,
                                const Keywords &keywords) {
    if (valid_symbols[keyword_symbol]) {
      for (KeywordSize i = 0; i < keywords.size(); i++) {
        if (start_with_title_keyword(line, keywords[i])) {
          lexer->result_symbol = keyword_symbol;
          next_token_size = keywords[i].size();
          return true;
        }
      }
    }
    return false;
  }

  bool scan_keyword_start(TSLexer *lexer, const bool *valid_symbols,
                          unsigned short keyword_symbol,
                          const KeywordString &line, const Keywords &keywords) {
    if (valid_symbols[keyword_symbol]) {
      for (KeywordSize i = 0; i < keywords.size(); i++) {
        if (ts_utils::start_with(line, keywords[i])) {
          lexer->result_symbol = keyword_symbol;
          next_token_size = keywords[i].size();
          return true;
        }
      }
    }
    return false;
  }

  const Dialect *get_dialect() {
    const Dialect *dialect = Dialect::for_index(this->language_index);
    if (!dialect) {
      this->language_index = 0;
      return DEFAULT_DIALECT;
    }
    return dialect;
  }

  bool change_dialect(const LanguageString &language) {
    this->language_index = 0;
    if (language != DEFAULT_DIALECT->language_name) {
      const Dialect *dialect = Dialect::for_name(language);
      if (!dialect) {
        return false;
      }
      this->language_index = dialect->index;
    }
    return true;
  }
};

} // namespace

extern "C" {
void *tree_sitter_gherkin_external_scanner_create() { return new Scanner(); }

bool tree_sitter_gherkin_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

unsigned tree_sitter_gherkin_external_scanner_serialize(void *payload,
                                                        char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_gherkin_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

void tree_sitter_gherkin_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}
}
