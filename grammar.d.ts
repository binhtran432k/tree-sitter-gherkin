/// <reference types="./dsl" />
interface GherkinGrammarStruct {
  document: Rule;
  // Feature
  feature: Rule;
  feature_header: Rule;
  feature_line: Rule;
  language: Rule;
  // Background
  background: Rule;
  background_line: Rule;
  // Scenario
  scenario_definition: Rule;
  scenario: Rule;
  scenario_line: Rule;
  scenario_outline_line: Rule;
  // Exmaples
  examples_definition: Rule;
  examples: Rule;
  examples_line: Rule;
  examples_table: Rule;
  // Rule
  rule: Rule;
  rule_header: Rule;
  rule_line: Rule;
  // Step
  step: Rule;
  step_arg: Rule;
  and_line: Rule;
  but_line: Rule;
  given_line: Rule;
  then_line: Rule;
  when_line: Rule;
  asterisk_line: Rule;
  // Description
  description_helper: Rule;
  description: Rule;
  // Tags
  tags: Rule;
  tag: Rule;
  // Table
  table_row: Rule;
  table_col: Rule;
  table_cell: Rule;
  // Doc String
  doc_string: Rule;
  // Misc
  _ws: Rule;
  comment: Rule;
  context: Rule;
  _other: Rule;
  data_table: Rule;
}

interface GherkinGrammarExternalOrAliasStruct {
  // External
  and_kw: Rule;
  background_kw: Rule;
  but_kw: Rule;
  examples_kw: Rule;
  feature_kw: Rule;
  given_kw: Rule;
  rule_kw: Rule;
  scenario_kw: Rule;
  scenario_outline_kw: Rule;
  then_kw: Rule;
  when_kw: Rule;
  _language_start: Rule;
  language_name: Rule;
  _eol: Rule;
  error_sentinel: Rule;
  // Alias
  table_head_row: Rule;
  table_trailing: Rule;
  media_type: Rule;
  doc_string_content: Rule;
  invalid_language_name: Rule;
}

declare const grammar: GrammarFunc<
  GherkinGrammarStruct,
  GherkinGrammarExternalOrAliasStruct
>;