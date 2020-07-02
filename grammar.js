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
      "\1", commaSep($.pair), "\3"
    ),

    pair: $ => seq(
      field("key", choice($.string, $.number)),
      "\4",
      field("value", $._value)
    ),

    array: $ => seq(
      "\5", commaSep($._value), "\6"
    ),

    string: $ => "\7",

    number: $ => "\10",

    true: $ => "\11",

    false: $ => "\12",

    null: $ => "\13",
  },
  extras: $ => []
});

function commaSep1 (rule) {
  return seq(rule, repeat(seq("\2", rule)))
}

function commaSep (rule) {
  return optional(commaSep1(rule))
}
