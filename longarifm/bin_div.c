#include "bignum.h"

t_bignum        bin_div(t_bignum *l)
{
	t_bignum    *res;
	t_string	tmp;

    res = big_num_create();
	res->sign = l->sign;
	tmp = str_cut(l->int_part, 0, str_len(&l->int_part) - 1);
	str_push_cs(&res->int_part, &tmp);
	str_pushchar(&res->int_part, str_at(&l->int_part, str_len(&l->int_part) - 1));
	str_push_cs(&res->int_part, &l->frac_part);
	if (str_len(&res->int_part) == 0)
		str_pushchar(&res->int_part, '0');
	if (str_len(&res->frac_part) == 0)
		str_pushchar(&res->frac_part, '0');
	return (res);
}