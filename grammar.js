/**
 * @file Gherkin grammar for tree-sitter
 * @author Binh Tran <binhtran432k@gmail.com>
 * @license MIT
 */

/// <reference types="./grammar" />
// @ts-check
const PREC = {
  OTHER: -1,
};

export default grammar({
  name: "gherkin",

  extras: ($) => [$._ws, $.comment],

  conflicts: ($) => [[$.rule], [$.scenario]],

  externals: ($) => [
    $.and_kw,
    $.background_kw,
    $.but_kw,
    $.examples_kw,
    $.feature_kw,
    $.given_kw,
    $.rule_kw,
    $.scenario_kw,
    $.scenario_outline_kw,
    $.then_kw,
    $.when_kw,
    $._language_start,
    $.language_name,
    $._eol,
    $.error_sentinel,
  ],

  rules: {
    document: ($) => optional($.feature),
    // Feature
    feature: ($) =>
      seq(
        $.feature_header,
        optional($.background),
        repeat($.scenario_definition),
        repeat($.rule),
      ),
    feature_header: ($) =>
      seq(
        optional($.language),
        optional($.tags),
        $.feature_line,
        optional($.description_helper),
      ),
    feature_line: ($) => seq($.feature_kw, ":", optional($.context), $._eol),
    language: ($) =>
      seq(
        $._language_start,
        "language",
        ":",
        choice($.language_name, alias($.context, $.invalid_language_name)),
      ),
    // Background
    background: ($) =>
      seq($.background_line, optional($.description_helper), repeat($.step)),
    background_line: ($) =>
      seq($.background_kw, ":", optional($.context), $._eol),
    // Scenario
    scenario_definition: ($) => seq(optional($.tags), $.scenario),
    scenario: ($) =>
      seq(
        choice($.scenario_line, $.scenario_outline_line),
        optional($.description_helper),
        repeat($.step),
        repeat($.examples_definition),
      ),
    scenario_line: ($) => seq($.scenario_kw, ":", optional($.context), $._eol),
    scenario_outline_line: ($) =>
      seq($.scenario_outline_kw, ":", optional($.context), $._eol),
    // Exmaples
    examples_definition: ($) => seq(optional($.tags), $.examples),
    examples: ($) =>
      seq($.examples_line, optional($.description_helper), $.examples_table),
    examples_line: ($) => seq($.examples_kw, ":", optional($.context), $._eol),
    examples_table: ($) =>
      seq(alias($.table_row, $.table_head_row), repeat($.table_row)),
    // Rule
    rule: ($) =>
      seq($.rule_header, optional($.background), repeat($.scenario_definition)),
    rule_header: ($) =>
      seq(optional($.tags), $.rule_line, optional($.description_helper)),
    rule_line: ($) => seq($.rule_kw, ":", optional($.context), $._eol),
    // Step
    step: ($) =>
      seq(
        choice(
          $.and_line,
          $.but_line,
          $.given_line,
          $.then_line,
          $.when_line,
          $.asterisk_line,
        ),
        optional($.step_arg),
      ),
    step_arg: ($) => choice($.data_table, $.doc_string),
    and_line: ($) => seq($.and_kw, optional($.context), $._eol),
    but_line: ($) => seq($.but_kw, optional($.context), $._eol),
    given_line: ($) => seq($.given_kw, optional($.context), $._eol),
    then_line: ($) => seq($.then_kw, optional($.context), $._eol),
    when_line: ($) => seq($.when_kw, optional($.context), $._eol),
    asterisk_line: ($) => seq("* ", optional($.context), $._eol),
    // Description
    description_helper: ($) => seq($.description, repeat($.comment)),
    description: ($) => repeat1($._other),
    // Tags
    tags: ($) => repeat1($.tag),
    tag: () => /@[^@\s]*/,
    // Table
    table_row: ($) =>
      seq(
        "|",
        repeat($.table_col),
        optional(alias($.table_cell, $.table_trailing)),
        $._eol,
      ),
    table_col: ($) => seq(optional($.table_cell), optional(/\\\r?\n/), "|"),
    table_cell: () => repeat1(/(\\.|[^\|\\\s])+/),
    // Doc String
    doc_string: ($) =>
      choice(
        ...[
          { separator: "```", content: /``?|`?`?(\\.|[^\\\s`]|[^\\\s`]``?)+/ },
          { separator: '"""', content: /""?|"?"?(\\.|[^\\\s"]|[^\\\s"]""?)+/ },
        ].map(({ separator, content }) =>
          seq(
            separator,
            optional(seq(optional(alias(content, $.media_type)), $._eol)),
            alias(repeat(content), $.doc_string_content),
            separator,
          ),
        ),
      ),
    // Misc
    _ws: () => /\s+/,
    comment: () => /#[^\r\n]*/,
    context: () => repeat1(/\S+/),
    _other: () => token(prec(PREC.OTHER, /[^\r\n]+/)),
    data_table: ($) => repeat1($.table_row),
  },
});
