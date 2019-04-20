#include "bignum.h"

void pos_pow(t_bignum *n, int power, t_bignum (*f)(t_bignum*))
{
	t_bignum *tmp;
	int i;

	i = -1;
	while (++i < power)
	{
		*tmp = f(n);
		big_num_destroy(n);
		n = tmp;
	}
}