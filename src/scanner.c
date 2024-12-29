#include "gherkin/dialect.c"
#include "gherkin/dialect.h"
#include "tree_sitter/alloc.h"
#include "tree_sitter/parser.h"

typedef enum {
  AND_KW,
  BACKGROUND_KW,
  BUT_KW,
  EXAMPLES_KW,
  FEATURE_KW,
  GIVEN_KW,
  RULE_KW,
  SCENARIO_KW,
  SCENARIO_OUTLINE_KW,
  THEN_KW,
  WHEN_KW,
  _LANGUAGE_START,
  LANGUAGE_NAME,
  _EOL,
  ERROR_SENTINEL,
} TokenType;

typedef struct {
  LanguageValue language_value;
} Scanner;

static inline bool TokenType_need_colon(TokenType typ) {
  switch (typ) {
  case BACKGROUND_KW:
  case EXAMPLES_KW:
  case FEATURE_KW:
  case RULE_KW:
  case SCENARIO_KW:
  case SCENARIO_OUTLINE_KW:
    return true;
  default:
    return false;
  }
}

static inline TokenType DialectValue_to_token_type(const DialectValue value) {
  return value - 1;
}

static inline bool is_nbsp(TSLexer *lexer) {
  switch (lexer->lookahead) {
  case 0x9: // \t
  // case 0xa:  // \n
  case 0xb: // \v
  case 0xc: // \f
  // case 0xd:  // \r
  case 0x20: // " "
  case 0xa0:
  case 0x1680:
  case 0x2000: // start \u2000
  case 0x2001:
  case 0x2002:
  case 0x2003:
  case 0x2004:
  case 0x2005:
  case 0x2006:
  case 0x2007:
  case 0x2008:
  case 0x2009:
  case 0x200a: // end \u200a
  case 0x2028:
  case 0x2029:
  case 0x202f:
  case 0x205f:
  case 0x3000:
    return true;
  default:
    return false;
  }
}

static inline bool is_eol(TSLexer *lexer) {
  return lexer->eof(lexer) || lexer->lookahead == '\n' ||
         lexer->lookahead == '\r';
}

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline bool advance_char(TSLexer *lexer, char c) {
  if (lexer->lookahead == c) {
    advance(lexer);
    return true;
  }
  return false;
}

static inline bool advance_text(TSLexer *lexer, char *text) {
  size_t i = 0;
  while (advance_char(lexer, text[i]))
    i++;
  return text[i] == 0;
}

static unsigned serialize(Scanner *scanner, char *buffer) {
  *(LanguageValue *)&buffer[0] = scanner->language_value;
  return sizeof(LanguageValue);
}

static void deserialize(Scanner *scanner, const char *buffer, unsigned length) {
  scanner->language_value = 0;
  if (length > 0) {
    scanner->language_value = *(LanguageValue *)&buffer[0];
  }
}

static bool scan(Scanner *scanner, TSLexer *lexer, const bool *valid_symbols) {
  if (valid_symbols[_EOL]) {
    while (is_nbsp(lexer))
      skip(lexer);
    if (is_eol(lexer)) {
      if (!lexer->eof(lexer))
        advance(lexer);
      lexer->result_symbol = _EOL;
      return true;
    }
  }
  if (!valid_symbols[ERROR_SENTINEL] && valid_symbols[_LANGUAGE_START] &&
      lexer->lookahead == '#') {
    advance(lexer);
    lexer->mark_end(lexer);

    while (is_nbsp(lexer))
      advance(lexer);

    if (!advance_text(lexer, "language"))
      return false;

    while (is_nbsp(lexer))
      advance(lexer);

    if (!advance_char(lexer, ':'))
      return false;

    lexer->result_symbol = _LANGUAGE_START;
    return true;
  }
  if (!valid_symbols[ERROR_SENTINEL] && valid_symbols[LANGUAGE_NAME]) {
    LanguageState state = TrieState_new();
    const LanguageValue *last_value = NULL;
    LanguageSize last_count = 0;
    while (!state.stopped && !lexer->eof(lexer)) {
      LanguageState_advance(&state, &language, lexer->lookahead);
      last_count++;
      if (!state.stopped)
        advance(lexer);
      if (state.value != NULL) {
        last_value = state.value;
        last_count = 0;
      }
    }

    while (is_nbsp(lexer))
      advance(lexer);

    if (last_value != NULL && last_count < 2 && is_eol(lexer)) {
      scanner->language_value = *last_value;
      lexer->result_symbol = LANGUAGE_NAME;
      return true;
    }

    scanner->language_value = 0;
    return false;
  }
  if (valid_symbols[AND_KW] || valid_symbols[BACKGROUND_KW] ||
      valid_symbols[BUT_KW] || valid_symbols[EXAMPLES_KW] ||
      valid_symbols[FEATURE_KW] || valid_symbols[GIVEN_KW] ||
      valid_symbols[RULE_KW] || valid_symbols[SCENARIO_KW] ||
      valid_symbols[SCENARIO_OUTLINE_KW] || valid_symbols[THEN_KW] ||
      valid_symbols[WHEN_KW]) {
    const Dialect *dialect = Dialect_for(scanner->language_value);
    DialectState state = TrieState_new();
    const DialectValue *last_value = NULL;
    DialectSize last_count = 0;
    while (!state.stopped && !lexer->eof(lexer)) {
      DialectState_advance(&state, dialect, lexer->lookahead);
      last_count++;
      if (!state.stopped)
        advance(lexer);
      if (state.value != NULL) {
        last_value = state.value;
        last_count = 0;
        lexer->mark_end(lexer);
      }
    }
    if (last_value != NULL) {
      TokenType typ = DialectValue_to_token_type(*last_value);
      if (TokenType_need_colon(typ) &&
          (last_count > 1 || lexer->lookahead != ':'))
        return false;
      if (valid_symbols[typ]) {
        lexer->result_symbol = typ;
        return true;
      }
    }
  }
  return false;
}

void *tree_sitter_gherkin_external_scanner_create() {
  Scanner *scanner = ts_calloc(1, sizeof(Scanner));
  deserialize(scanner, NULL, 0);
  return scanner;
}

void tree_sitter_gherkin_external_scanner_destroy(void *payload) {

  Scanner *scanner = (Scanner *)payload;
  ts_free(scanner);
}

unsigned tree_sitter_gherkin_external_scanner_serialize(void *payload,
                                                        char *buffer) {

  Scanner *scanner = (Scanner *)payload;
  return serialize(scanner, buffer);
}

void tree_sitter_gherkin_external_scanner_deserialize(void *payload,
                                                      const char *buffer,
                                                      unsigned length) {
  Scanner *scanner = (Scanner *)payload;
  deserialize(scanner, buffer, length);
}

bool tree_sitter_gherkin_external_scanner_scan(void *payload, TSLexer *lexer,
                                               const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;
  return scan(scanner, lexer, valid_symbols);
}
