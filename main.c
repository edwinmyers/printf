#include <stdio.h>
#include "source/ft_printf.h"

int main()
{
	double i = 34340.34534;

	char *s = "%34.343ld";

//   ft_printf("%x\n", 505);
//   ft_printf("%X\n", 505);
//   ft_printf("%%#08x\n", 42);
//   ft_printf("%x\n", 1000);
  ft_printf("%#f\n", i);
}

// @"string: %-#393.718lluAAA; num: -584350174\r\n"
// @"string: %0-616.614loAAA; 