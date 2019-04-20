#include "bignum.h"

void do_int_part(t_bignum *num)
{
	int i;
	char c;
	t_bignum *tmp;
	t_bignum *sum;

	i = -1;
	sum = big_num_create_by_str('+', "0", "0");
	while (++i < num->int_part.size)
	{
		c = num->int_part.data[i];
		tmp = big_num_create_by_str('+', &c, "0");
		pos_pow(&tmp, num->int_part.size - i - 1);
		sum = dec_sum(&sum, &tmp);
		big_num_destroy(&tmp);
	}
	str_push_cs(&num->int_part, &sum->int_part);
	big_num_destroy(&sum);
}

void do_frac_part(t_bignum *num, int precision)
{
	int i;
	int j;
	char c;
	t_bignum sum;
	t_bignum a1;

	i = 0;
	sum = big_num_create_by_str('+', "0", "0");
	while (i < num->frac_part.size)
	{
		j = 0;
		t_bignum a1;
		c = num->frac_part.data[i];
		a1 = big_num_create_by_str('+', &c, "0");
		while (j++ <= i)
			a1 = dec_div(&a1);
		sum = dec_sum(&sum, &a1);
		++i;
	}
}