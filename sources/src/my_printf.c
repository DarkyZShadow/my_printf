#include "my_printf.h"

int             my_printf(char *format, ...)
{
    size_t      i;
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

t_func          get_func_from_flag(char c)
{
    size_t      i;

    for (i = 0; printf_flags[i] != '\0'; i++)
        if (printf_flags[i] == c)
            return printf_funcs[i];
    return NULL;
}

