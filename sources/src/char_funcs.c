#include "my_printf.h"

uint            f_string(va_list *vl)
{
    char        *tmp;

    tmp = va_arg(*vl, char*);
    asm_putstr(tmp);
    return asm_strlen(tmp);
}

uint            f_percent(va_list *vl)
{
    (void)vl;
    asm_putchar('%');
    return 1;
}

uint            f_character(va_list *vl)
{
    asm_putchar((char)va_arg(*vl, int));
    return 1;
}

