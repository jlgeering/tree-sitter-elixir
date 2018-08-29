module.exports = grammar({
  name: 'elixir',

  extras: $ => [
    $.comment,
    /\s|\\\n/
  ],

  rules: {
    program: $ => repeat($._expression),
    
    _expression: $ => choice(
      $.integer,
      $.float,
      $.true,
      $.false,
      $.atom,
      $.nil,
      $.tuple,
      $.list,
    ),
    
    integer: $ => /0b[01](_?[01])*|0o[0-7](_?[0-7])*|0x[0-9a-fA-F](_?[0-9a-fA-F])*|\d(_?\d)*/,
    float: $ => /\d(_?\d)*\.\d(_?\d)*([eE][\+-]?\d(_?\d)*)?/,
    
    true: $ => choice('true',':true'),
    false: $ => choice('false',':false'),

    atom: $ => /:\w(_?\w)*|:'.*'|:".*"/,

    nil: $ => 'nil',
    
    tuple: $ => seq(
      '{',
      optional(
        seq(
          $._expression,
          repeat(seq(',', $._expression)),
          optional(','),
        ),
      ),
      '}',
    ),
    
    list: $ => seq(
      '[',
      optional(
        seq(
          $._expression,
          repeat(seq(',', $._expression)),
          optional(','),
        ),
      ),
      ']',
    ),

    comment: $ => token(seq('#', /.*/)),
  }
});
