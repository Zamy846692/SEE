/* This is a generated file: do not edit */

struct SEE_string;
extern const unsigned int SEE_nstringtab;

#define STRi(x) SEE_STR_##x
#define STR(x) STRn(SEE_STR_##x)

#if STATIC_STRINGS
/* Address calculated at link time */
# define STRn(i) (&SEE_static_stringtab[i])
extern struct SEE_string SEE_static_stringtab[];
#else
/* Address calculated at run time */
extern struct SEE_string *SEE_stringtab;
# define STRn(i) (SEE_stringtab + (i))
#endif
#define SEE_STR_bad_argc 0
#define SEE_STR_bad_arg 1
#define SEE_STR_internal_error 2
#define SEE_STR_new_not_an_object 3
#define SEE_STR_not_a_constructor 4
#define SEE_STR_no_such_function 5
#define SEE_STR_not_a_function 6
#define SEE_STR_not_callable 7
#define SEE_STR_instanceof_not_object 8
#define SEE_STR_in_not_object 9
#define SEE_STR_no_hasinstance 10
#define SEE_STR_bad_lvalue 11
#define SEE_STR_regex_syntax_error 12
#define SEE_STR_recursion_limit_reached 13
#define SEE_STR_string_limit_reached 14
#define SEE_STR_error 15
#define SEE_STR_no_string_space 16
#define SEE_STR_bad_utf16_string 17
#define SEE_STR_unknown_file 18
#define SEE_STR_string_input_name 19
#define SEE_STR_eval_input_name 20
#define SEE_STR_duplicate_label 21
#define SEE_STR_previous_definition 22
#define SEE_STR_toobject_undefined 23
#define SEE_STR_toobject_null 24
#define SEE_STR_toobject_bad 25
#define SEE_STR_toboolean_bad 26
#define SEE_STR_tonumber_bad 27
#define SEE_STR_tostring_bad 28
#define SEE_STR_defaultvalue_string_bad 29
#define SEE_STR_defaultvalue_number_bad 30
#define SEE_STR_defaultvalue_no_bad 31
#define SEE_STR_not_array 32
#define SEE_STR_array_badlen 33
#define SEE_STR_not_boolean 34
#define SEE_STR_not_function 35
#define SEE_STR_not_cfunction 36
#define SEE_STR_not_number 37
#define SEE_STR_not_regexp 38
#define SEE_STR_not_string 39
#define SEE_STR_not_date 40
#define SEE_STR_null_thisobj 41
#define SEE_STR_apply_not_array 42
#define SEE_STR_bad_radix 43
#define SEE_STR_regexp_bad_string 44
#define SEE_STR_regexp_bad_flag 45
#define SEE_STR_uri_badhex 46
#define SEE_STR_bad_utf8 47
#define SEE_STR_bad_unicode 48
#define SEE_STR_array_sort_error 49
#define SEE_STR_toLocaleString_notfunc 50
#define SEE_STR_toLocaleString_notstring 51
#define SEE_STR_eval_not_callable 52
#define SEE_STR_too_many_args 53
#define SEE_STR_string_not_ascii 54
#define SEE_STR_string_contains_null 55
#define SEE_STR_not_implemented 56
#define SEE_STR_implementation_dependent 57
#define SEE_STR_empty_string 58
#define SEE_STR_zero_digit 59
#define SEE_STR_comma 60
#define SEE_STR_write 61
#define SEE_STR_writeval 62
#define SEE_STR_minus 63
#define SEE_STR_name 64
#define SEE_STR_message 65
#define SEE_STR_Error 66
#define SEE_STR_EvalError 67
#define SEE_STR_RangeError 68
#define SEE_STR_ReferenceError 69
#define SEE_STR_SyntaxError 70
#define SEE_STR_TypeError 71
#define SEE_STR_URIError 72
#define SEE_STR_arguments 73
#define SEE_STR_callee 74
#define SEE_STR_source 75
#define SEE_STR_global 76
#define SEE_STR_ignoreCase 77
#define SEE_STR_multiline 78
#define SEE_STR_lastIndex 79
#define SEE_STR_exec 80
#define SEE_STR_test 81
#define SEE_STR_index 82
#define SEE_STR_input 83
#define SEE_STR_parse 84
#define SEE_STR_UTC 85
#define SEE_STR_toDateString 86
#define SEE_STR_toTimeString 87
#define SEE_STR_toLocaleDateString 88
#define SEE_STR_toLocaleTimeString 89
#define SEE_STR_getTime 90
#define SEE_STR_getFullYear 91
#define SEE_STR_getUTCFullYear 92
#define SEE_STR_getMonth 93
#define SEE_STR_getUTCMonth 94
#define SEE_STR_getDate 95
#define SEE_STR_getUTCDate 96
#define SEE_STR_getDay 97
#define SEE_STR_getUTCDay 98
#define SEE_STR_getHours 99
#define SEE_STR_getUTCHours 100
#define SEE_STR_getMinutes 101
#define SEE_STR_getUTCMinutes 102
#define SEE_STR_getSeconds 103
#define SEE_STR_getUTCSeconds 104
#define SEE_STR_getMilliseconds 105
#define SEE_STR_getUTCMilliseconds 106
#define SEE_STR_getTimezoneOffset 107
#define SEE_STR_setTime 108
#define SEE_STR_setMilliseconds 109
#define SEE_STR_setUTCMilliseconds 110
#define SEE_STR_setSeconds 111
#define SEE_STR_setUTCSeconds 112
#define SEE_STR_setMinutes 113
#define SEE_STR_setUTCMinutes 114
#define SEE_STR_setHours 115
#define SEE_STR_setUTCHours 116
#define SEE_STR_setDate 117
#define SEE_STR_setUTCDate 118
#define SEE_STR_setMonth 119
#define SEE_STR_setUTCMonth 120
#define SEE_STR_setFullYear 121
#define SEE_STR_setUTCFullYear 122
#define SEE_STR_toUTCString 123
#define SEE_STR_Object 124
#define SEE_STR_Function 125
#define SEE_STR_Array 126
#define SEE_STR_String 127
#define SEE_STR_Boolean 128
#define SEE_STR_Number 129
#define SEE_STR_Date 130
#define SEE_STR_RegExp 131
#define SEE_STR_Math 132
#define SEE_STR_Infinity 133
#define SEE_STR_NaN 134
#define SEE_STR_apply 135
#define SEE_STR_call 136
#define SEE_STR_charAt 137
#define SEE_STR_charCodeAt 138
#define SEE_STR_concat 139
#define SEE_STR_constructor 140
#define SEE_STR_decodeURI 141
#define SEE_STR_decodeURIComponent 142
#define SEE_STR_encodeURI 143
#define SEE_STR_encodeURIComponent 144
#define SEE_STR_eval 145
#define SEE_STR_fromCharCode 146
#define SEE_STR_hasOwnProperty 147
#define SEE_STR_indexOf 148
#define SEE_STR_isFinite 149
#define SEE_STR_isNaN 150
#define SEE_STR_isPrototypeOf 151
#define SEE_STR_join 152
#define SEE_STR_lastIndexOf 153
#define SEE_STR_length 154
#define SEE_STR_localeCompare 155
#define SEE_STR_match 156
#define SEE_STR_parseFloat 157
#define SEE_STR_parseInt 158
#define SEE_STR_pop 159
#define SEE_STR_propertyIsEnumerable 160
#define SEE_STR_prototype 161
#define SEE_STR_push 162
#define SEE_STR_replace 163
#define SEE_STR_reverse 164
#define SEE_STR_search 165
#define SEE_STR_shift 166
#define SEE_STR_slice 167
#define SEE_STR_sort 168
#define SEE_STR_splice 169
#define SEE_STR_split 170
#define SEE_STR_substring 171
#define SEE_STR_toLocaleLowerCase 172
#define SEE_STR_toLocaleString 173
#define SEE_STR_toLocaleUpperCase 174
#define SEE_STR_toLowerCase 175
#define SEE_STR_toString 176
#define SEE_STR_toUpperCase 177
#define SEE_STR_undefined 178
#define SEE_STR_unshift 179
#define SEE_STR_valueOf 180
#define SEE_STR_MAX_VALUE 181
#define SEE_STR_MIN_VALUE 182
#define SEE_STR_NEGATIVE_INFINITY 183
#define SEE_STR_POSITIVE_INFINITY 184
#define SEE_STR_toFixed 185
#define SEE_STR_toExponential 186
#define SEE_STR_toPrecision 187
#define SEE_STR_E 188
#define SEE_STR_LN10 189
#define SEE_STR_LN2 190
#define SEE_STR_LOG2E 191
#define SEE_STR_LOG10E 192
#define SEE_STR_PI 193
#define SEE_STR_SQRT1_2 194
#define SEE_STR_SQRT2 195
#define SEE_STR_abs 196
#define SEE_STR_acos 197
#define SEE_STR_asin 198
#define SEE_STR_atan 199
#define SEE_STR_atan2 200
#define SEE_STR_ceil 201
#define SEE_STR_cos 202
#define SEE_STR_exp 203
#define SEE_STR_floor 204
#define SEE_STR_log 205
#define SEE_STR_max 206
#define SEE_STR_min 207
#define SEE_STR_pow 208
#define SEE_STR_random 209
#define SEE_STR_round 210
#define SEE_STR_sin 211
#define SEE_STR_sqrt 212
#define SEE_STR_tan 213
#define SEE_STR_escape 214
#define SEE_STR_unescape 215
#define SEE_STR_substr 216
#define SEE_STR_getYear 217
#define SEE_STR_setYear 218
#define SEE_STR_toGMTString 219
#define SEE_STR_object 220
#define SEE_STR_string 221
#define SEE_STR_number 222
#define SEE_STR_unknown 223
#define SEE_STR_unexpected_eof 224
#define SEE_STR_broken_literal 225
#define SEE_STR_escaped_lit_nl 226
#define SEE_STR_invalid_esc_x 227
#define SEE_STR_invalid_esc_u 228
#define SEE_STR_hex_literal_detritus 229
#define SEE_STR_dec_literal_detritus 230
#define SEE_STR_eof_in_c_comment 231
#define SEE_STR_eof_in_regex 232
#define SEE_STR_broken_regex 233
#define SEE_STR_bad_unicode_ident 234
#define SEE_STR_synchronized 235
#define SEE_STR_eleven_filler 236
#define SEE_STR_implements 237
#define SEE_STR_instanceof 238
#define SEE_STR_transient 239
#define SEE_STR_protected 240
#define SEE_STR_interface 241
#define SEE_STR_volatile 242
#define SEE_STR_debugger 243
#define SEE_STR_function 244
#define SEE_STR_continue 245
#define SEE_STR_abstract 246
#define SEE_STR_private 247
#define SEE_STR_package 248
#define SEE_STR_extends 249
#define SEE_STR_boolean 250
#define SEE_STR_finally 251
#define SEE_STR_default 252
#define SEE_STR_native 253
#define SEE_STR_export 254
#define SEE_STR_typeof 255
#define SEE_STR_switch 256
#define SEE_STR_return 257
#define SEE_STR_throws 258
#define SEE_STR_import 259
#define SEE_STR_static 260
#define SEE_STR_delete 261
#define SEE_STR_public 262
#define SEE_STR_double 263
#define SEE_STR_float 264
#define SEE_STR_super 265
#define SEE_STR_short 266
#define SEE_STR_const 267
#define SEE_STR_class 268
#define SEE_STR_while 269
#define SEE_STR_final 270
#define SEE_STR_throw 271
#define SEE_STR_catch 272
#define SEE_STR_break 273
#define SEE_STR_with 274
#define SEE_STR_long 275
#define SEE_STR_void 276
#define SEE_STR_else 277
#define SEE_STR_goto 278
#define SEE_STR_enum 279
#define SEE_STR_this 280
#define SEE_STR_byte 281
#define SEE_STR_case 282
#define SEE_STR_char 283
#define SEE_STR_new 284
#define SEE_STR_try 285
#define SEE_STR_int 286
#define SEE_STR_for 287
#define SEE_STR_var 288
#define SEE_STR_in 289
#define SEE_STR_do 290
#define SEE_STR_if 291
#define SEE_STR_null 292
#define SEE_STR_true 293
#define SEE_STR_false 294
#define SEE_STR___proto__ 295
#define SEE_STR_cfunction_body1 296
#define SEE_STR_cfunction_body2 297
#define SEE_STR_cfunction_body3 298
#define SEE_STR_1 299
#define SEE_STR_2 300
#define SEE_STR_3 301
#define SEE_STR_4 302
#define SEE_STR_5 303
#define SEE_STR_6 304
#define SEE_STR_7 305
#define SEE_STR_8 306
#define SEE_STR_9 307
#define SEE_STR_dollar_underscore 308
#define SEE_STR_dollar_star 309
#define SEE_STR_dollar_ampersand 310
#define SEE_STR_dollar_plus 311
#define SEE_STR_dollar_backquote 312
#define SEE_STR_dollar_quote 313
#define SEE_STR_dollar_1 314
#define SEE_STR_dollar_2 315
#define SEE_STR_dollar_3 316
#define SEE_STR_dollar_4 317
#define SEE_STR_dollar_5 318
#define SEE_STR_dollar_6 319
#define SEE_STR_dollar_7 320
#define SEE_STR_dollar_8 321
#define SEE_STR_dollar_9 322
#define SEE_STR_lastMatch 323
#define SEE_STR_lastParen 324
#define SEE_STR_leftContext 325
#define SEE_STR_rightContext 326
#define SEE_STR__ns_nop 327
#define SEE_STR_anchor 328
#define SEE_STR_big 329
#define SEE_STR_blink 330
#define SEE_STR_bold 331
#define SEE_STR_fixed 332
#define SEE_STR_fontcolor 333
#define SEE_STR_fontsize 334
#define SEE_STR_italics 335
#define SEE_STR_link 336
#define SEE_STR_small 337
#define SEE_STR_strike 338
#define SEE_STR_sub 339
#define SEE_STR_sup 340
