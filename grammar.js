module.exports = grammar({
  name: 'elixir',

  extras: $ => [
    $.comment,
    /\s|\\\n/
  ],

  rules: {
    program: $ => repeat($._expression),

    _expression: $ => $._value,

    _value: $ => choice(
      $.alias,
      $.integer,
      $.float,
      $.true,
      $.false,
      $.atom,
      $.nil,
      $.charlist,
      $.binary,
      $.string,
      $.tuple,
      $.list,
      $.keyword_list,
      $.module,
    ),

    alias: $ => /[A-Z]\w*(\.[A-Z]\w*)*/,

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

    keyword: $ => seq(
      // TODO refine
      /\w+: /,
      $._value
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
        $.string,
        // TODO identifier
      ),
      optional(seq(
        '::',
        $.binary_options,
      )),
    ),

    binary_options: $ => /[-a-z0-9()]*/,

    string: $ => seq(
      '"',
      repeat(/\\"|[^"]/),
      '"',
    ),
  
    tuple: $ => seq(
      '{',
      optional(
        seq(
          $._expression,
          repeat(seq(',', $._expression)),
          optional(seq(',', $.implicit_keyword_list)),
          optional(','),
        ),
      ),
      '}',
    ),

    list: $ => choice(
      $._empty_list,
      $._simple_list,
      $._head_tail_list,
    ),
    _empty_list: $ => seq('[',']',),
    _simple_list: $ => seq(
      '[',
      $._expression,
      repeat(seq(',', $._expression)),
      optional(seq(',', $.implicit_keyword_list)),
      optional(','),
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
    tail: $ => choice(
      $.list,
      $.keyword_list,
    ),

    keyword_list: $ => seq(
      '[',
      $.keyword,
      repeat(seq(',', $.keyword)),
      optional(','),
      ']',
    ),

    implicit_keyword_list: $ => prec.right(seq(
      $.keyword,
      repeat(seq(',', $.keyword)),
    )),

    module: $ => seq(
      'defmodule',
      $.alias,
      'do',
      repeat($.module_attribute),
      'end',
    ),
    
    module_attribute: $ => seq(
      /@\w+/,
      optional(choice(
        $._value,
        $.implicit_keyword_list,
      )),
    ),

    comment: $ => token(seq('#', /.*/)),
  }
});
