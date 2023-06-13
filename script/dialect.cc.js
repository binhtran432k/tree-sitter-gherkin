const fs = require("fs");

const gherkin = require("@cucumber/gherkin/src/gherkin-languages.json");

const LANG_LIMIT_LENGTH = 10;
const KEYWORD_LIMIT_LENGTH = 54;
const KEYWORD_LIST = Object.freeze([
  "and",
  "background",
  "but",
  "examples",
  "feature",
  "given",
  "rule",
  "scenario",
  "scenarioOutline",
  "then",
  "when",
]);

writeDialect("./src/dialect.cc");

/**
 * @param {string} fileName
 */
function writeDialect(fileName) {
  checkDialect();

  fs.writeFile(fileName, getContent(), (err) => {
    if (err) {
      console.error(err);
    }
  });
}

/**
 * @return {string}
 */
function getContent() {
  const headerName = "GHERKIN_DIALECT_CC_";
  const comment =
    "// This file is auto generated. Please, don't manually change this file";

  const header = `
#ifndef ${headerName}
#define ${headerName}
#include "dialect.h"
`;

  const footer = `#endif /* ${headerName} */`;

  const dialects = [
    "static const Dialect DIALECTS[] = {",
    ...Object.entries(gherkin).map(([langOrig, value], i) => {
      const maxSize = Object.entries(value).reduce((size1, [, keywords]) => {
        if (!Array.isArray(keywords)) {
          return size1;
        }
        return Math.max(size1, ...keywords.map((x) => x.length));
      }, 0);
      return [
        `  {`,
        `    ${i + 1},`,
        `    ${maxSize},`,
        `    "${langOrig}",`,
        ...KEYWORD_LIST.map((keyword) => {
          const keyword_values = value[keyword]
            .filter((v) => v != "* ")
            .map((v) => `U"${v}"`);
          return `    {${keyword_values.join(",")}},`;
        }),
        "  },",
      ].join("\n");
    }),
    "};",
  ].join("\n");

  const name_to_index = `
const DialectIndex Dialect::name_to_index(const LanguageString &language) {
  switch (language[0]) {
${Object.entries(groupGherkinByFirstCharacter())
  .map(([k, v]) => {
    return [
      `  case '${k}':`,
      ...v.map(
        ([lang, index]) => `    if (language == "${lang}") return ${index};`
      ),
      "    break;",
    ].join("\n");
  })
  .join("\n")}
  }
  return 0;
}
`;

  const for_index = `
const Dialect* Dialect::for_index(DialectIndex index) {
  if (index <= 0 || index > ${Object.keys(gherkin).length}) {
    return 0;
  }
  return &DIALECTS[index - 1];
}
`;

  return [comment, header, dialects, name_to_index, for_index, footer]
    .map((x) => x.trim())
    .join("\n\n");
}

function groupGherkinByFirstCharacter() {
  return Object.entries(gherkin).reduce((p, [c], i) => {
    const first_c = c[0];
    const val = [c, i + 1];
    if (p[first_c]) {
      p[first_c].push(val);
    } else {
      p[first_c] = [val];
    }
    return p;
  }, {});
}

/**
 * Make sure optimized scanner work as expected
 */
function checkDialect() {
  Object.entries(gherkin).forEach(([langOrig, value]) => {
    const languageLength = getCharacterLength(langOrig) + 1;
    if (languageLength > LANG_LIMIT_LENGTH) {
      throw `You need to upgrade language limit length: ${langOrig}, ${languageLength}`;
    } else if (!isAscii(langOrig)) {
      throw `You need to upgrade language char type for larger than ASCII: ${langOrig}`;
    }
    KEYWORD_LIST.forEach((keyword) => {
      value[keyword].forEach((/**@type {string}*/ keywordValue) => {
        const keywordLength = getCharacterLength(keywordValue) + 1;
        if (keywordValue.includes(":")) {
          throw `You need to change logic relative to ":": ${langOrig}, ${keywordValue}`;
        }
        if (keywordLength > KEYWORD_LIMIT_LENGTH) {
          throw `You need to upgrade keyword limit length: ${langOrig}, ${keywordValue}, ${keywordLength}`;
        }
      });
    });
  });
}

/**
 * @param {string} str
 * @return {boolean}
 */
function isAscii(str) {
  return /^[\x00-\x7F]*$/.test(str);
}

/**
 * @param {string} str
 * @return {number}
 */
function getCharacterLength(str) {
  return [...str].length;
}
