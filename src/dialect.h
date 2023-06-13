#ifndef GHERKIN_DIALECT_H_
#define GHERKIN_DIALECT_H_

#include <stdint.h>
#include <string>
#include <vector>

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_LANGUAGE_SIZE 10

typedef uint8_t DialectIndex;
typedef uint8_t LanguageSize;
typedef uint8_t KeywordSize;
typedef char32_t KeywordChar;
typedef std::basic_string<KeywordChar> KeywordString;
typedef char LanguageChar;
typedef std::basic_string<LanguageChar> LanguageString;

typedef std::vector<KeywordString> Keywords;

typedef struct Dialect {
  const DialectIndex index;
  const KeywordSize max_keywords_size;
  const LanguageString language_name;
  const Keywords and_keywords;
  const Keywords background_keywords;
  const Keywords but_keywords;
  const Keywords examples_keywords;
  const Keywords feature_keywords;
  const Keywords given_keywords;
  const Keywords rule_keywords;
  const Keywords scenario_keywords;
  const Keywords scenario_outline_keywords;
  const Keywords then_keywords;
  const Keywords when_keywords;

  static const Dialect *for_index(DialectIndex i);

  static const DialectIndex name_to_index(const LanguageString &language);

  static const Dialect *for_name(const LanguageString &language) {
    return for_index(name_to_index(language));
  }
} Dialect;

#ifdef __cplusplus
}
#endif

#endif /* GHERKIN_DIALECT_H_ */
