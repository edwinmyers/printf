#include <stdio.h>
#include "source/ft_printf.h"

int main()
{
	double i = 34340.34534;

	char *s = "%34.343ld";
ft_printf("%f\n", i);
printf("%f\n", i);
}

// @"string: %-#393.718lluAAA; num: -584350174\r\n"
// @"string: %0-616.614loAAA; 