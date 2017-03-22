#include "my_printf.h"

int             main(int argc, char **argv)
{
    int         res1;
    int         res2;
    
    res1 = printf("toto%d %i\n", 14, 18);
    res2 = my_printf("toto%d %i\n", 14, 18);
    
    printf("\n%d\n", res1);
    my_printf("%d\n\n", res2);
    
    res1 = printf("%% %s %%\n", "100");
    res2 = my_printf("%% %s %%\n", "100");
    
    printf("\n%d\n", res1);
    my_printf("%d\n", res2);

    
    return 0;
}

