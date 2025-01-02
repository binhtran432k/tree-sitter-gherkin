[
  (and_kw)
  (background_kw)
  (but_kw)
  (examples_kw)
  (feature_kw)
  (given_kw)
  (rule_kw)
  (scenario_kw)
  (scenario_outline_kw)
  (then_kw)
  (when_kw)
  "* "
] @keyword

(tag) @type

(table_head_row
  (table_col
    (table_cell) @markup.heading))

":" @punctuation.delimiter

"|" @punctuation.special

(doc_string) @string.documentation

"language" @property

(language_name) @string
(invalid_language_name) @comment.error

[
  (comment)
  (language)
] @comment
