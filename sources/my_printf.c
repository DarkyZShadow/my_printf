#include "my_printf.h"

int             my_printf(char *format, ...)
{
    int         i;
    void        *func;

    for (i = 0; i < my_strlen(format); i++)
    {
        if (format[i] != '%')
            my_putchar(format[i]);
        else
        {
            func = get_func_from_flag(format[++i]);
            if (func == NULL)
                /*return -1*/;
            else
                ;
        }
    }
    return i;
}

void            *get_func_from_flag(char c)
{
    int         i;

    for (i = 0; printf_flags[i] != '\0'; i++)
    {
        if (printf_flags[i] == c)
            return printf_funcs[i];
    }
    return NULL;
}

int             main(int argc, char **argv)
{
    int         res1;
    int         res2;
    
    res1 = printf("toto%d %i", 14, 18);
    res2 = my_printf("toto%d %i", 14, 18);
    printf("\n%d\n", res1);
    printf("%d\n", res2);
    return 0;
}

