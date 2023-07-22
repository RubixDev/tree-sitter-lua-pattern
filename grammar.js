module.exports = grammar({
    name: 'lua_pattern',

    externals: $ => [
        $.end,
    ],

    extras: $ => [/\r?\n/],

    rules: {
        pattern: $ =>
            seq(
                optional($.start),
                optional($._pattern),
                // TODO: `$` or char might have to be externalized
                optional($.end),
            ),
        _pattern: $ =>
            repeat1(
                choice(
                    seq($.char, optional($.quantifier)),
                    seq($.set, optional($.quantifier)),
                    $.group,
                    $.balanced,
                    $.frontier,
                    $.backreference,
                    seq($.any, optional($.quantifier)),
                    seq($.escaped, optional($.quantifier)),
                    $.class,
                ),
            ),

        start: $ => '^',
        any: $ => '.',
        class: $ => /%[acdglpsuwxzACDGLPSUWXZ]/,
        backreference: $ => /%[0-9]/,
        escaped: $ => /%./,
        quantifier: $ => /[+\-*?]/,
        char: $ => /[^%\n]/,

        set: $ => seq('[', optional('^'), repeat(choice($.class, $.set_range, $.set_char, $.escaped)), ']'),
        group: $ => seq('(', optional($._pattern), ')'),
        balanced: $ => /%b../,
        frontier: $ => seq('%f', $.set),

        set_range: $ => prec.right(seq($.set_char, '-', $.set_char)),
        set_char: $ => /[^-\]]/,
    },
})
