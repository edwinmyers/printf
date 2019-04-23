#include <stdio.h>
#include "source/ft_printf.h"

int main()
{
	int i;
	long long p;
	long double n;
	
	printf("|% -5x|\n", 45);
	ft_printf("|% -5x|\n", 45);
}
