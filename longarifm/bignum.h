#ifndef BIGNUM_H_
#define BIGNUM_H_

#include "t_string.h"
#include "support_functions/support_functions.h"

typedef struct  s_bignum
{
    char        sign;
    t_string    int_part;
    t_string    frac_part;
}               t_bignum;

t_bignum        big_num_create(char sign, char *int_part, char *frac_part);
t_bignum        bin_sum(t_bignum *l, t_bignum *r);
t_bignum        bin_minus(t_bignum *l, t_bignum *r);
t_bignum        bin_mult(t_bignum *l);
t_bignum        bin_divide(t_bignum *l);
t_bignum        big_num_destroy(t_bignum *num);

#endif
