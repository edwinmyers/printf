#ifndef BIGNUM_H_
#define BIGNUM_H_

#include "../string/t_string.h"
#include "../support_functions/support_functions.h"

typedef struct  s_bignum
{
    char        sign;
    t_string    int_part;
    t_string    frac_part;
}               t_bignum;

t_bignum        *big_num_create_by_str(char sign, char *int_part, char *frac_part);
t_bignum        *big_num_create(void);
t_bignum        *bin_sum(t_bignum *l, t_bignum *r);
t_bignum        *bin_mult(t_bignum *l);
t_bignum        *bin_div(t_bignum *l);
t_bignum        *dec_mult(t_bignum *n);
t_bignum        *dec_div(t_bignum *n);
t_bignum        *dec_sum(t_bignum *l, t_bignum *r);
t_bignum        *get_the_bits(long double arg);
void            process_the_exponent(t_bignum *num, int exponent);
void			swap_comp_str(t_string *s1, t_string *s2);
void       	 	big_num_destroy(t_bignum *num);
void            set_sign(t_bignum *num);

#endif
