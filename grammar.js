module.exports = grammar({
  name: 'elixir',

  extras: $ => [
    $.comment,
    /\s|\\\n/
  ],

  rules: {
    program: $ => repeat(choice(
      $.integer,
      $.float,
      $.true,
      $.false,
      $.nil,
    )),
    
    integer: $ => /0b[01](_?[01])*|0o[0-7](_?[0-7])*|0x[0-9a-fA-F](_?[0-9a-fA-F])*|\d(_?\d)*/,
    float: $ => /\d(_?\d)*\.\d(_?\d)*([eE][\+-]?\d(_?\d)*)?/,
    
    true: $ => 'true',
    false: $ => 'false',
    nil: $ => 'nil',

    comment: $ => token(seq('#', /.*/)),
  }
});
