#include <stdio.h>
#include "source/ft_printf.h"

int main()
{
	int i;
	long long p;
	long double n;
	
	printf("|%#.100f|\n", 6.99);
	ft_printf("|%#.100f|\n", 6.99);
}
