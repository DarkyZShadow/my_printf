#include "my_printf.h"

uint            f_pointer(va_list *vl)
{
    long        tmp;

    tmp = va_arg(*vl, long);
    asm_putstr("Ox");
    asm_putnbr(tmp, 16, true);
    return asm_nbrlen(tmp, 16, true);
}

