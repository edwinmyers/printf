#include "bignum.h"

t_bignum        *big_num_create(void)
{
    t_bignum *num;

    num = (t_bignum *)malloc(sizeof(t_bignum));
    num->sign = '+';
    num->int_part = str_create_size(5);
    num->frac_part = str_create_size(5);
    return (num);
}