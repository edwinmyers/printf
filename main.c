#include <stdio.h>
#include "source/ft_printf.h"

int main()
{
	int i = 0;

	char *s = "%moooo\n";

	ft_printf(s, i);
	printf(s, i);

}

// @"string: %-#393.718lluAAA; num: -584350174\r\n"
// @"string: %0-616.614loAAA; 