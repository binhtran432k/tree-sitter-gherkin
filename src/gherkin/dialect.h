#ifndef DIALECT_H_
#define DIALECT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "array_trie.h"

typedef int32_t DialectLabel;
typedef uint8_t DialectSize;
typedef uint8_t DialectValue;
DECL_ARRAY_TRIE(Dialect, DialectLabel, DialectSize, DialectValue);

typedef int8_t LanguageLabel;
typedef uint8_t LanguageSize;
typedef uint8_t LanguageValue;
DECL_ARRAY_TRIE(Language, LanguageLabel, LanguageSize, LanguageValue);

static const Dialect *Dialect_for(LanguageValue language);

#ifdef __cplusplus
}
#endif

#endif // !DIALECT_H_
