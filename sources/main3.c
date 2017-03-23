#include "my_printf.h"
#include <string.h>
#include <stdio.h>

int                 main(int ac, char **av)
{
    int res = 0;

    res = my_printf("1 - une chaine\n");
    my_printf("%d\n", res);
    res = my_printf("2 - %s\n", "une autre chaine");
    my_printf("%d\n", res);
    res = my_printf("3 - %i\n", -42);
    my_printf("%d\n", res);
    res = my_printf("4 - %s %d %s%c\n", "avec", -4, "parametres", '\n');
    my_printf("%d\n", res);

    res = my_printf("1 - %o\n", -42);                          /* unsigned octal */
    my_printf("%d\n", res);
    res = my_printf("2 - %u\n", -4200000000);                  /* unsigned decimal */
    my_printf("%d\n", res);
    res = my_printf("3 - %x\n", -42);                          /* unsigned hexadecimal */
    my_printf("%d\n", res);
    res = my_printf("4 - %X\n", -42);                          /* unsigned hexadecimal */
    my_printf("%d\n", res);
    res = my_printf("5 - %d%%\n", -42);
    my_printf("%d\n\n\n", res);

    res = printf("1 - une chaine\n");
    printf("%d\n", res);
    res = printf("2 - %s\n", "une autre chaine");
    printf("%d\n", res);
    res = printf("3 - %i\n", -42);
    printf("%d\n", res);
    res = printf("4 - %s %d %s%c\n", "avec", -4, "parametres", '\n');
    printf("%d\n", res);

    res = printf("1 - %o\n", -42);                          /* unsigned octal */
    printf("%d\n", res);
    res = printf("2 - %u\n", -4200000000);                  /* unsigned decimal */
    printf("%d\n", res);
    res = printf("3 - %x\n", -42);                          /* unsigned hexadecimal */
    printf("%d\n", res);
    res = printf("4 - %X\n", -42);                          /* unsigned hexadecimal */
    printf("%d\n", res);
    res = printf("5 - %d%%\n", -42);
    printf("%d\n", res);
}

