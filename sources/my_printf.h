#ifndef __MY_PRINTF_H__
#define __MY_PRINTF_H__
#include "common.h"

const char      *printf_flags[20] =
{
    "d",
    "i",
    "u",
    "o",
    "x",
    "X",
    "f",
    "F",
    "e",
    "E",
    "g",
    "G",
    "a",
    "A",
    "c",
    "s",
    "p",
    "n",
    "%",
    "\0"
};

const void      (*printf_funcs[20])() =
{
    NULL, /*s_dec_int,*/
    NULL, /*s_dec_int,*/
    NULL, /*u_dec_int,*/
    NULL, /*u_oct,*/
    NULL, /*u_hex_int_low,*/
    NULL, /*u_hex_int_upp,*/
    NULL, /*dec_float_low,*/
    NULL, /*dec_float_upp,*/
    NULL, /*scientific_low,*/
    NULL, /*scientific_upp,*/
    NULL, /*use_shortest,*/
    NULL, /*use_shortest,*/
    NULL, /*hex_float_low,*/
    NULL, /*hex_float_upp,*/
    NULL, /*character,*/
    NULL, /*string,*/
    NULL, /*pointer,*/
    NULL, /*nothing,*/
    NULL, /*percent,*/
    NULL
};

/* Functions */
void            *get_func_from_flag(char c);

#endif

