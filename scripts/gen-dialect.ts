import languageMap from "gherkin/gherkin-languages.json";

import { RadixTree } from "./utils/radix-tree.js";
import { ArrayTrie } from "./utils/array-trie.js";

interface Language {
  name: string;
  data: typeof languageMap.en;
}

enum Token {
  And = 1,
  Background = 2,
  But = 3,
  Examples = 4,
  Feature = 5,
  Given = 6,
  Rule = 7,
  Scenario = 8,
  ScenarioOutline = 9,
  Then = 10,
  When = 11,
}

function buildDialectArrayTrie(language: Language["data"]): ArrayTrie {
  const tree = new RadixTree();

  const treeKeys: {
    tokens: string[];
    tokenType: Token;
  }[] = [
    { tokens: language.and, tokenType: Token.And },
    { tokens: language.background, tokenType: Token.Background },
    { tokens: language.but, tokenType: Token.But },
    { tokens: language.examples, tokenType: Token.Examples },
    { tokens: language.feature, tokenType: Token.Feature },
    { tokens: language.given, tokenType: Token.Given },
    { tokens: language.rule, tokenType: Token.Rule },
    { tokens: language.scenario, tokenType: Token.Scenario },
    { tokens: language.scenarioOutline, tokenType: Token.ScenarioOutline },
    { tokens: language.then, tokenType: Token.Then },
    { tokens: language.when, tokenType: Token.When },
  ];

  for (const key of treeKeys) {
    for (const token of key.tokens) {
      if (token !== "* ") tree.insert(token, key.tokenType);
    }
  }

  return ArrayTrie.fromRadixTree(tree);
}

function buildLanguageArrayTrie(languageNames: string[]): ArrayTrie {
  const tree = new RadixTree();
  for (let i = 0; i < languageNames.length; i++) {
    tree.insert(languageNames[i], i + 1);
  }
  return ArrayTrie.fromRadixTree(tree);
}

function buildLanguages(): Language[] {
  const languages: Language[] = [];
  for (const languageName in languageMap) {
    languages.push({ name: languageName, data: languageMap[languageName] });
  }
  return languages;
}

function getDialectScript(
  languageName: string,
  dialectTrie: ArrayTrie,
): string {
  const name = normalizeLanguageName(languageName);
  return `
static const DialectLabel ${name}_prefix_raw[] = {${dialectTrie.prefixRaw.join(",")}};
static const DialectSize ${name}_prefix_indexes[] = {${dialectTrie.prefixIndexes.join(",")}};
static const DialectSize ${name}_prefix_sizes[] = {${dialectTrie.prefixSizes.join(",")}};
static const DialectSize ${name}_i_p1s[] = {${dialectTrie.iP1s.join(",")}};
static const DialectSize ${name}_sizes[] = {${dialectTrie.sizes.join(",")}};
static const DialectValue ${name}_values[] = {${dialectTrie.values.join(",")}};
static const DialectSize ${name}_root_size = ${dialectTrie.rootSize};

static const Dialect ${name}_dialect = {${[
    `${name}_prefix_raw`,
    `${name}_prefix_indexes`,
    `${name}_prefix_sizes`,
    `${name}_i_p1s`,
    `${name}_sizes`,
    `${name}_values`,
    `${name}_root_size`,
  ].join(", ")}};
`.trim();
}

function getLanguageScript(languageTrie: ArrayTrie): string {
  const name = "language_trie";
  const exportName = "language";
  return `
static const LanguageLabel ${name}_prefix_raw[] = {${languageTrie.prefixRaw.join(",")}};
static const LanguageSize ${name}_prefix_indexes[] = {${languageTrie.prefixIndexes.join(",")}};
static const LanguageSize ${name}_prefix_sizes[] = {${languageTrie.prefixSizes.join(",")}};
static const LanguageSize ${name}_i_p1s[] = {${languageTrie.iP1s.join(",")}};
static const LanguageSize ${name}_sizes[] = {${languageTrie.sizes.join(",")}};
static const LanguageValue ${name}_values[] = {${languageTrie.values.join(",")}};
static const LanguageSize ${name}_root_size = ${languageTrie.rootSize};

static const Language ${exportName} = {${[
    `${name}_prefix_raw`,
    `${name}_prefix_indexes`,
    `${name}_prefix_sizes`,
    `${name}_i_p1s`,
    `${name}_sizes`,
    `${name}_values`,
    `${name}_root_size`,
  ].join(", ")}};
`.trim();
}

function getDialectForScript(languageNames: string[]) {
  return `
const Dialect *Dialect_for(LanguageValue language) {
  switch (language) {
${languageNames.map((name, i) => `  case ${i + 1}: return &${normalizeLanguageName(name)}_dialect;`).join("\n")}
  default: return &en_dialect;
  }
}
`.trim();
}

function getArrayTrieImplScript(name: string): string {
  return `IMPL_ARRAY_TRIE(${name}, ${name}Label, ${name}Size, ${name}Value);`;
}

function normalizeLanguageName(languageName: string): string {
  return languageName.replaceAll("-", "_");
}

async function main(): Promise<void> {
  const languages = buildLanguages();
  const scriptContents: string[] = ['#include "dialect.h"'];
  let total = 0; // 8417, 7567, 7446
  for (let i = 0; i < languages.length; i++) {
    const dialectTrie = buildDialectArrayTrie(languages[i].data);
    total += dialectTrie.prefixRaw.length;
    scriptContents.push(getDialectScript(languages[i].name, dialectTrie));
  }
  console.log(`Total Prefix Raw Length: ${total}`);

  const languageNames = languages.map((x) => x.name);
  const languageTrie = buildLanguageArrayTrie(languageNames);
  scriptContents.push(getLanguageScript(languageTrie));

  scriptContents.push(getDialectForScript(languageNames));

  scriptContents.push(getArrayTrieImplScript("Dialect"));
  scriptContents.push(getArrayTrieImplScript("Language"));

  await Bun.write(
    Bun.file(new URL("src/gherkin/dialect.c", Bun.pathToFileURL(__dirname))),
    scriptContents.join("\n\n"),
  );
}

if (import.meta.main) {
  await main();
}
