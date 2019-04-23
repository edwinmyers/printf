# include "source/ft_printf.h"
#include <stdio.h>

int main()
{
    ft_printf("%#08x\n", 42);
    printf("%#08x\n", 42);
    ft_printf("|%#8x|\n", 42);
    printf("|%#8x|\n", 42);
    return (0);
}

