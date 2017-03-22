#include "my_printf.h"

int             my_printf(char *format, ...)
{
    int         i;
    int         count;
    t_func      func;
    va_list     vl;

    count = 0;
    va_start(vl, format);
    for (i = 0; i < asm_strlen(format); ++i, ++count)
    {
        if (format[i] != '%')
            asm_putchar(format[i]);
        else
        {
            func = get_func_from_flag(format[++i]);
            if (func == NULL)
                /*return -1*/;
            else
                count += func(&vl) - 1;
        }
    }
    va_end(vl);
    return count;
}

void            *get_func_from_flag(char c)
{
    size_t      i;

    for (i = 0; printf_flags[i] != '\0'; i++)
        if (printf_flags[i] == c)
            return printf_funcs[i];
    return NULL;
}


uint            f_s_dec_int(va_list *vl)
{
    int         tmp;

    tmp = va_arg(*vl, int);
    asm_putnbr(tmp, 10, false);
    return asm_nbrlen(tmp, 10, false);
}

uint            f_u_dec_int(va_list *vl)
{
    int         tmp;

    tmp = va_arg(*vl, int);
    asm_putnbr(tmp, 10, true);
    return asm_nbrlen(tmp, 10, true);
}

uint            f_u_oct(va_list *vl)
{
    int         tmp;

    tmp = va_arg(*vl, int);
    asm_putnbr(tmp, 8, true);
    return asm_nbrlen(tmp, 8, true);
}

uint            f_string(va_list *vl)
{
    char        *tmp;

    tmp = va_arg(*vl, char*);
    asm_putstr(tmp);
    return asm_strlen(tmp);
}

uint            f_percent(va_list *vl)
{
    asm_putchar('%');
    return 1;
}

uint            f_character(va_list *vl)
{
    asm_putchar((char)va_arg(*vl, int));
    return 1;
}

uint            f_u_hex_int_low(va_list *vl)
{
    int         tmp;

    tmp = va_arg(*vl, int);
    asm_putnbr(tmp, 16, true);
    return asm_nbrlen(tmp, 16, true);
}

uint            f_u_hex_int_upp(va_list *vl)
{
    int         tmp;
    int         len;
    char        *buf;

    tmp = va_arg(*vl, int);
    len = asm_nbrlen(tmp, 16, true);
    if (!(buf = (char*)malloc(len + 1)))
        return 0;
    asm_putstr(asm_strtoupper(asm_itoa(tmp, buf, 16), buf));
    free(buf);
    return len;
}

