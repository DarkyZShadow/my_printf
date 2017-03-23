#ifndef __MY_PRINTF_H__
#define __MY_PRINTF_H__
#include "asm_libmy.h"
#include <stdarg.h>
#include <stdlib.h>


/* Typedef */
typedef unsigned int    uint;
typedef uint            (*t_func)(va_list *);

/* Functions */
int                     my_printf(char *format, ...);
void                    *get_func_from_flag(char c);
uint                    f_s_dec_int(va_list *vl);
uint                    f_string(va_list *vl);
uint                    f_percent(va_list *vl);
uint                    f_character(va_list *vl);
uint                    f_u_dec_int(va_list *vl);
uint                    f_u_oct(va_list *vl);
uint                    f_u_hex_int_low(va_list *vl);
uint                    f_u_hex_int_upp(va_list *vl);
uint                    f_pointer(va_list *vl);

/* Globals vars */
static const char       printf_flags[20] =
{
    'd',
    'i',
    'u',
    'o',
    'x',
    'X',
    'f',
    'F',
    'e',
    'E',
    'g',
    'G',
    'a',
    'A',
    'c',
    's',
    'p',
    'n',
    '%',
    '\0'
};

static const            t_func printf_funcs[20] =
{
    f_s_dec_int,
    f_s_dec_int,
    f_u_dec_int,
    f_u_oct,
    f_u_hex_int_low,
    f_u_hex_int_upp,
    NULL, /*f_dec_float_low,*/
    NULL, /*f_dec_float_upp,*/
    NULL, /*f_scientific_low,*/
    NULL, /*f_scientific_upp,*/
    NULL, /*f_use_shortest,*/
    NULL, /*f_use_shortest,*/
    NULL, /*f_hex_float_low,*/
    NULL, /*f_hex_float_upp,*/
    f_character,
    f_string,
    f_pointer,
    NULL, /*f_nothing,*/
    f_percent,
    NULL
};

#endif

