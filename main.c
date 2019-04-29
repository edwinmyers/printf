#include <stdio.h>
#include "source/ft_printf.h"
#include <limits.h>
int main()
{
	double i = 34340.34534;
	i = LONG_MIN;
	char *s = "%34.343ld";
	ft_printf("|%345678f|\n", 2345678903423424.2423423423);
	printf("|%345678f|\n", 2345678903423424.2423423423);
}

// @"string: %-#393.718lluAAA; num: -584350174\r\n"
// @"string: %0-616.614loAAA; 