#include "bignum.h"

void process_the_exponent(t_bignum *num, int exponent, )
{
	int i;

	i = 0;
    while (i++ < ft_abs(exponent))
    {

    }
	if (exponent > 0)
		while (i++ < exponent)
		    *num = bin_mult(num);
	else if (exponent < 0)
		while (i++ < ft_abs(exponent))
			*num = bin_divide(num);
}

t_bignum *get_the_bits(long double arg)
{
	int i;
	int byte;
	t_bignum *num;

	i = 62;
	t.d_num = (long double)arg;
	num = malloc(sizeof(t_bignum));
	num->frac_part = str_create_size(10);
	num->int_part = str_create_size(10);
	str_pushchar(&num->int_part, (t.t_double.mantissa >> 63 & 1) + 48);
	byte = 0;
	while (i >= 0)
	{
		byte = t.t_double.mantissa >> i & 1;
		str_pushchar(&num->frac_part, byte + 48);
		--i;
	}
	if (arg > 0)
		process_the_exponent(num, t.t_double.exponent - 16383);
	return (num);
}