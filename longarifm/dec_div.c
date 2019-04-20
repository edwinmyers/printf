#include "bignum.h"

t_bignum        *dec_div(t_bignum *n)
{
    t_bignum    *res;
	int 		i;
	int			a;

	i = -1;
	res = big_num_create();
	res->sign = n->sign;
	if (n->int_part.data[0] == '1')
	{
		res = big_num_create_by_str(n->sign, "0", "5");
		return (res);
	}
	str_pushchar(&res->int_part, '0');
	while (++i < n->frac_part.size)
		if (i > 0)
			str_pushchar(&res->frac_part,  ((n->frac_part.data[i] - 48) +
			(n->frac_part.data[i - 1] - 48) % 2 * 10 ) / 2 + 48);
		else
			str_pushchar(&res->frac_part,  (n->frac_part.data[i] - 48) / 2 + 48);
	str_pushchar(&res->frac_part, (n->frac_part.data[i - 1]);
	return (res);
}