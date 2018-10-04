module.exports = grammar({
  name: 'elixir',
  
  word: $ => $.identifier,
  
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
      $._list_or_keyword_list,
      $._map,
      $.struct,
      $.defmodule,
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

    _list_or_keyword_list: $ => choice(
      $.list,
      $.keyword_list,
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
    tail: $ => $._list_or_keyword_list,

    keyword_list: $ => seq(
      '[',
      $.keyword,
      repeat(seq(',', $.keyword)),
      optional(','),
      ']',
    ),

    _map: $ => choice(
      $.map,
      $.map_update,
    ),

    map: $ => seq(
      '%{',
      optional($._map_body),
      '}',
    ),
    _map_body: $ => seq(
      choice(
        seq(
          $.pair,
          repeat(seq(',', $.pair)),
        ),
        $.keyword,
      ),
      repeat(seq(',', $.keyword)),
      optional(','),
    ),

    map_update: $ => seq(
      '%{',
      $._value,
      '|',
      $._map_body,
      '}',
    ),

    pair: $ => seq(
      $._value,
      '=>',
      $._value,
    ),
    
    struct: $ => seq(
      '%',
      $.alias,
      choice(
        $._empty_struct_body,
        $._struct_body,
        $._keyword_struct_body,
      ),
    ),
    _empty_struct_body: $ => seq('{','}'),
    _struct_body: $ => seq(
      '{',
      $.pair,
      repeat(seq(',', $.pair)),
      repeat(seq(',', $.keyword)),
      optional(','),
      '}',
    ),
    _keyword_struct_body: $ => seq(
      '{',
      $.keyword,
      repeat(seq(',', $.keyword)),
      optional(','),
      '}',
    ),

    implicit_keyword_list: $ => prec.right(seq(
      $.keyword,
      repeat(seq(',', $.keyword)),
    )),

    defmodule: $ => seq(
      'defmodule',
      $.alias,
      'do',
      repeat($._module_body),
      'end',
    ),
    
    _module_body: $ => choice(
      $.module_attribute,
      $.defstruct,
      $.def,
      $.defp,
    ),
    
    module_attribute: $ => seq(
      /@\w+/,
      optional(choice(
        $._value,
        $.implicit_keyword_list,
      )),
    ),
    
    defstruct: $ => seq(
      'defstruct',
      choice(
        $.list,
        $.implicit_keyword_list,
      ),
    ),
    
    def: $ => seq(
      'def',
      $._function,
    ),
    defp: $ => seq(
      'defp',
      $._function,
    ),
    _function: $ => seq(
      $.identifier,
      optional('()'),
      'do',
      $._value,
      'end',
    ),

    identifier: $ => /[a-z_][a-zA-Z1-9_]*/,

    comment: $ => token(seq('#', /.*/)),
  }
});
