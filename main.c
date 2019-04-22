#include <stdio.h>
#include "source/ft_printf.h"

int main()
{
	int i;
	long long p;
	long double n;

	i = 4;
	printf("|%.1f|", 1.66);
	ft_printf("|%.1f|\n", 1.66);
}
