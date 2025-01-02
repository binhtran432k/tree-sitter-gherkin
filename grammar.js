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

  inline: ($) => [$.steps, $._alt_steps],

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
      seq(
        $.background_line,
        optional($.description_helper),
        repeat($._alt_steps),
        optional($.steps),
      ),
    background_line: ($) =>
      seq($.background_kw, ":", optional($.context), $._eol),
    // Scenario
    scenario_definition: ($) => seq(optional($.tags), $.scenario),
    scenario: ($) =>
      seq(
        choice($.scenario_line, $.scenario_outline_line),
        optional($.description_helper),
        repeat($._alt_steps),
        optional($.steps),
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
    steps: ($) => repeat1(choice($.given_group, $.when_group, $.then_group)),
    step_arg: ($) => choice($.data_table, $.doc_string),
    _alt_steps: ($) => choice($.and_step, $.but_step, $.asterisk_step),
    step_context: ($) => repeat1(choice(/[^<\s]+/, $.step_param)),
    step_param: () => /<[^>\r\n]+>/,
    // Given
    given_group: ($) => seq($.given_step, repeat($._alt_steps)),
    given_step: ($) => seq($.given_line, optional($.step_arg)),
    given_line: ($) => seq($.given_kw, optional($.step_context), $._eol),
    // When
    when_group: ($) => seq($.when_step, repeat($._alt_steps)),
    when_step: ($) => seq($.when_line, optional($.step_arg)),
    when_line: ($) => seq($.when_kw, optional($.step_context), $._eol),
    // Then
    then_group: ($) => seq($.then_step, repeat($._alt_steps)),
    then_step: ($) => seq($.then_line, optional($.step_arg)),
    then_line: ($) => seq($.then_kw, optional($.step_context), $._eol),
    // And
    and_step: ($) => seq($.and_line, optional($.step_arg)),
    and_line: ($) => seq($.and_kw, optional($.step_context), $._eol),
    // But
    but_step: ($) => seq($.but_line, optional($.step_arg)),
    but_line: ($) => seq($.but_kw, optional($.step_context), $._eol),
    // Asterisk
    asterisk_step: ($) => seq($.asterisk_line, optional($.step_arg)),
    asterisk_line: ($) => seq("* ", optional($.step_context), $._eol),
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
