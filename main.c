#include <stdio.h>
#include "source/ft_printf.h"

int main()
{
	int i;
	long long p;
	long double n;
	
	printf("|%-07.1f|\n", 6.44);
	ft_printf("|%-07.1f|\n", 6.44);
}
