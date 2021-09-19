module.exports = grammar({
  name: 'peg',

  rules: {
    source_file: ($) => seq(optional($.go_section), $.peg_section),

    go_section: ($) =>
      seq($.package_clause, $.package_identifier, $.type_declaration),

    package_clause: (_) => 'package',

    package_identifier: (_) => /[a-z]+/,

    type_declaration: ($) => seq('type', $.type_spec, $.block),

    type_spec: ($) =>
      seq(field('name', $.type_identifier), field('type', $.type_identifier)),

    block: ($) => seq('{', $.type_identifier, '}'),

    type_identifier: (_) => /[A-Za-z]+/,

    peg_section: ($) => repeat1($.peg_rule),

    peg_rule: ($) => seq($.rule_name, $.operator_assign, $.rule_body),

    rule_name: ($) => field('rule', $.rule_identifier),

    operator_assign: (_) => '<-',

    rule_body: ($) => choice($.rule_identifier, $.text),

    rule_identifier: (_) => /[A-Za-z]+/,

    quantifier: ($) =>
      choice($.zero_or_one, $.none_or_more, $.one_or_more, $.not),

    or: (_) => '/',

    not: (_) => '!',

    none_or_more: (_) => '*',

    one_or_more: (_) => '+',

    zero_or_one: (_) => '?',

    set_chars: (_) => seq('[', /[^]]+/, ']'),

    any_char: (_) => '.',

    text: ($) => choice($.text_case_sen, $.text_case_insen),

    text_case_sen: (_) => seq("'", /[^']+/, "'"),

    text_case_insen: (_) => seq('"', /[^"]+/, '"'),
  },
});
