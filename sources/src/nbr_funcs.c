#include "my_printf.h"

uint            f_s_dec_int(va_list *vl)
{
    int         tmp;

    tmp = va_arg(*vl, int);
    asm_putnbr(tmp, 10, false);
    return asm_nbrlen(tmp, 10, false);
}

uint            f_u_dec_int(va_list *vl)
{
    uint        tmp;

    tmp = va_arg(*vl, uint);
    asm_putnbr(tmp, 10, true);
    return asm_nbrlen(tmp, 10, true);
}

uint            f_u_oct(va_list *vl)
{
    uint        tmp;

    tmp = va_arg(*vl, uint);
    asm_putnbr(tmp, 8, true);
    return asm_nbrlen(tmp, 8, true);
}

uint            f_u_hex_int_low(va_list *vl)
{
    uint        tmp;

    tmp = va_arg(*vl, uint);
    asm_putnbr(tmp, 16, true);
    return asm_nbrlen(tmp, 16, true);
}

uint            f_u_hex_int_upp(va_list *vl)
{
    uint        tmp;
    int         len;
    char        *buf;

    tmp = va_arg(*vl, uint);
    len = asm_nbrlen(tmp, 16, true);
    if (!(buf = (char*)malloc(len + 1)))
        return 0;
    asm_putstr(asm_strtoupper(asm_itoa(tmp, buf, 16), buf));
    free(buf);
    return len;
}

