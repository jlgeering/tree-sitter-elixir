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
      $.charlist,
      $.binary,
      $.tuple,
      $.list,
    ),
    
    integer: $ => /0b[01](_?[01])*|0o[0-7](_?[0-7])*|0x[0-9a-fA-F](_?[0-9a-fA-F])*|\d(_?\d)*/,
    float: $ => /\d(_?\d)*\.\d(_?\d)*([eE][\+-]?\d(_?\d)*)?/,
    
    true: $ => choice('true',':true'),
    false: $ => choice('false',':false'),

    atom: $ => choice(
      /:\w([@\w])*(!|\?)?|:'.*'|:".*"/,
      $._operator_atom,
    ),

    _operator_atom: $ => choice(
      ':!',
      ':!=',
      ':!==',
      ':&',
      ':&&',
      ':&&&',
      ':*',
      ':+',
      ':++',
      ':-',
      ':--',
      ':.',
      ':..',
      ':/',
      ':::',
      ':<',
      ':<-',
      ':<<<',
      ':<<~',
      ':<=',
      ':<>',
      ':<|>',
      ':<~',
      ':<~>',
      ':=',
      ':==',
      ':===',
      ':=>',
      ':=~',
      ':>',
      ':>=',
      ':>>>',
      ':@',
      ':\\\\',
      ':^',
      ':|',
      ':|>',
      ':||',
      ':|||',
      ':~>',
      ':~>>',
      ':~~~',
    ),

    nil: $ => choice('nil',':nil'),

    charlist: $ => seq(
      '\'',
      repeat(/\\'|[^']/),
      '\'',
    ),
    
    binary: $ => seq(
      '<<',
      optional(
        seq(
          $.binary_segment,
          repeat(seq(',', $.binary_segment)),
          optional(','),
        ),
      ),
      '>>',
    ),
    
    binary_segment: $ => seq(
      choice(
        $.integer,
        $.charlist,
        // TODO string literals
        // TODO identifier
      ),
      optional(seq(
        '::',
        $.binary_options,
      )),
    ),
    
    binary_options: $ => /[-a-z0-9()]*/,

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

    list: $ => choice(
      $._simple_list,
      $._head_tail_list,
    ),
    _simple_list: $ => seq(
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
    _head_tail_list: $ => seq(
      '[',
      $.head,
      '|',
      $.tail,
      ']',
    ),
    head: $ => $._expression,
    tail: $ => $.list,

    comment: $ => token(seq('#', /.*/)),
  }
});
