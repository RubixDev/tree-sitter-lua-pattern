[
  "("
  ")"
  "["
  "]"
] @punctuation.bracket

[
  (escaped)
  (class)
] @string.escape

(backreference) @symbol

[
  (frontier)
  (balanced)
] @function.call

[
  (any)
  (start)
  (end)
] @punctuation.special

(quantifier) @operator

(set
  [
    "^" @operator
    (set_range
      "-" @operator
    )
  ]
)

(set_char) @constant.character

(char) @string
