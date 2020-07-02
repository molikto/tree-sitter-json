module.exports = grammar({
  name: 'json',

  supertypes: $ => [
    $._value
  ],

  rules: {
    document: $ => $._value,

    _value: $ => choice(
      $.object,
      $.array,
      $.number,
      $.string,
      $.true,
      $.false,
      $.null
    ),

    object: $ => seq(
      "{", commaSep($.pair), "}"
    ),

    pair: $ => seq(
      field("key", choice($.string, $.number)),
      ":",
      field("value", $._value)
    ),

    array: $ => seq(
      "[", commaSep($._value), "]"
    ),

    string: $ => "\"",

    number: $ => "0",

    true: $ => "t",

    false: $ => "f",

    null: $ => "n",
  },
  extras: $ => []
});

function commaSep1 (rule) {
  return seq(rule, repeat(seq(",", rule)))
}

function commaSep (rule) {
  return optional(commaSep1(rule))
}
