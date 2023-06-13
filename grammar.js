/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

const SP =
  /[\f\t\v\u0020\u00a0\u1680\u2000-\u200a\u2028\u2029\u202f\u205f\u3000\ufeff]+/; // MDN
const WS = /\s+/;
const WORD = /\S+/;
const CELL_WORD = /([^\s|\\]|\\.)+/;
const COMMENT = /#[^\r\n]*/;
const OTHER = /[^\r\n]+/;
const TAG = /@([^@\s])*/;
const SHARP = "#";
const COLON = ":";
const LANGUAGE_KEYWORD = "language";
const BACKTICK_X3 = "```";
const DITTO_X3 = '"""';
const PIPE = "|";
const ASTERISK_KEYWORD = "* ";

module.exports = grammar({
  name: "gherkin",

  extras: () => [SP],

  inline: ($) => [$._line_extras],

  conflicts: ($) => [[$.scenario], [$.rule]],

  externals: ($) => [
    $._eol,
    $._next_token,
    $._language_start,
    $._unknown_language_start,
    $._feature_start,
    $._rule_start,
    $._background_start,
    $._scenario_start,
    $._scenario_outline_start,
    $._examples_start,
    $._given_start,
    $._when_start,
    $._then_start,
    $._and_start,
    $._but_start,
  ],

  rules: {
    document: ($) => seq(repeat($._line_extras), optional($.feature)),

    _line_extras: ($) => choice(WS, $.comment),

    _colon: () => token.immediate(COLON),

    comment: () => COMMENT,

    inline_text: () => token(seq(WORD, repeat(seq(SP, WORD)))),

    other: () => token(prec(-1, OTHER)),
    _other: ($) => prec(-1, choice($.other, WS)),

    data_table: ($) =>
      seq(
        wrapLineExtras($, alias($.table_body, $.table_header)),
        repeat(wrapLineExtras($, $.table_body))
      ),
    table_body: ($) => seq(PIPE, repeat1(seq(optional($.cell_data), PIPE))),
    cell_data: () => token(seq(CELL_WORD, repeat(seq(SP, CELL_WORD)))),

    doc_string: ($) =>
      choice(getDocStringRule($, BACKTICK_X3), getDocStringRule($, DITTO_X3)),

    description_helper: ($) =>
      seq($.description, optional(seq($.comment, repeat($._line_extras)))),
    description: ($) => repeat1($._other),

    language_bang_line: ($) =>
      choice(
        getLanguageRule($, $._language_start, $.language_name),
        getLanguageRule($, $._unknown_language_start, $.unknown_language_name)
      ),
    language_keyword: () => LANGUAGE_KEYWORD,

    tags: ($) => repeat1(wrapLineExtras($, $.tag_line, optional($.comment))),
    tag_line: ($) => repeat1($.tag),
    tag: () => TAG,

    feature: ($) =>
      seq(
        $.feature_header,
        optional($.background),
        repeat($.scenario_definition),
        repeat($.rule)
      ),
    feature_header: ($) =>
      seq(
        optional(wrapLineExtras($, $.language_bang_line)),
        optional($.tags),
        wrapLineExtras($, $.feature_line),
        optional($.description_helper)
      ),
    feature_line: ($) =>
      seq(
        $._feature_start,
        alias($._next_token, $.feature_keyword),
        $._colon,
        optional($.inline_text)
      ),

    rule: ($) =>
      seq($.rule_header, optional($.background), repeat($.scenario_definition)),
    rule_header: ($) =>
      seq(
        optional($.tags),
        wrapLineExtras($, $.rule_line),
        optional($.description_helper)
      ),
    rule_line: ($) =>
      seq(
        $._rule_start,
        alias($._next_token, $.rule_keyword),
        $._colon,
        optional($.inline_text)
      ),

    background: ($) =>
      seq(
        wrapLineExtras($, $.background_line),
        optional($.description_helper),
        repeat($.step)
      ),
    background_line: ($) =>
      seq(
        $._background_start,
        alias($._next_token, $.background_keyword),
        $._colon,
        optional($.inline_text)
      ),

    scenario_definition: ($) => seq(optional($.tags), $.scenario),
    scenario: ($) =>
      seq(
        wrapLineExtras($, $.scenario_line),
        optional($.description_helper),
        repeat($.step),
        repeat($.examples_definition)
      ),
    scenario_line: ($) =>
      seq(
        choice(
          seq($._scenario_start, alias($._next_token, $.scenario_keyword)),
          seq(
            $._scenario_outline_start,
            alias($._next_token, $.scenario_outline_keyword)
          )
        ),
        $._colon,
        optional($.inline_text)
      ),

    examples_definition: ($) => seq(optional($.tags), $.examples),
    examples: ($) =>
      seq(
        wrapLineExtras($, $.examples_line),
        optional($.description_helper),
        optional(alias($.data_table, $.examples_table))
      ),
    examples_line: ($) =>
      seq(
        $._examples_start,
        alias($._next_token, $.examples_keyword),
        $._colon,
        optional($.inline_text)
      ),

    step: ($) => seq(wrapLineExtras($, $.step_line), optional($.step_args)),
    step_line: ($) =>
      seq(
        choice(
          seq($._given_start, alias($._next_token, $.given_keyword)),
          seq($._when_start, alias($._next_token, $.when_keyword)),
          seq($._then_start, alias($._next_token, $.then_keyword)),
          seq($._and_start, alias($._next_token, $.and_keyword)),
          seq($._but_start, alias($._next_token, $.but_keyword)),
          $.asterisk
        ),
        optional($.inline_text)
      ),
    step_args: ($) => choice($.data_table, wrapLineExtras($, $.doc_string)),

    asterisk: () => ASTERISK_KEYWORD,
  },
});

/**
 * @param {GrammarSymbols<string>} $
 * @param {RuleOrLiteral[]} line
 * @return {RuleOrLiteral}
 */
function wrapLineExtras($, ...line) {
  return seq(...line, $._eol, repeat($._line_extras));
}

/**
 * @param {GrammarSymbols<string>} $
 * @param {string} separator
 * @return {RuleOrLiteral}
 */
function getDocStringRule($, separator) {
  return seq(
    separator,
    optional(alias($.inline_text, $.media_type)),
    $._eol,
    repeat($._other),
    separator
  );
}

/**
 * @param {GrammarSymbols<string>} $
 * @param {RuleOrLiteral} startRule
 * @param {SymbolRule<string>} aliasRule
 * @return {RuleOrLiteral}
 */
function getLanguageRule($, startRule, aliasRule) {
  return seq(
    startRule,
    SHARP,
    $.language_keyword,
    COLON,
    alias($.inline_text, aliasRule)
  );
}
