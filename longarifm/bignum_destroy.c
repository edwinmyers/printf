#include "bignum.h"

void        big_num_destroy(t_bignum *num)
{
	str_destroy(&num->int_part);
	str_destroy(&num->frac_part);
	free(num);
	num = NULL;
}