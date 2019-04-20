#include "bignum.h"

static char            frac_sum(t_string l, t_string r, t_string *res)
{
    int i;
    char rem;
    char num_res;

    rem = 0;
    swap_comp_str(&l, &r);
    i = str_len(&l);
    while (--i >= str_len(&r))
        str_pushchar(res, str_at(&l, i));
    while (i >= 0)
    {
        num_res = (rem + (str_at(&l, i) - '0' + str_at(&r, i) - '0')) % 10 + '0';
        rem = (rem + str_at(&l, i) + str_at(&r, i) - 2 * '0') / 10;
        str_pushchar(res, num_res);
        --i;
    }
    str_rev(res);
    return (rem);
}

static void            int_sum(t_string l, t_string r, t_string *res, char rem)
{
    int i;
    int j;
    char num_res;

    j = 0;
    swap_comp_str(&l, &r);
    i = str_len(&l) - 1;
    j = str_len(&r);
    while (--j >= 0)
    {
        num_res = (rem + (str_at(&l, i) + str_at(&r, j) - 2 * '0')) % 10 + '0';
        rem = (rem + str_at(&l, i) + str_at(&r, j) - 2 * '0') / 10;
        str_pushchar(res, num_res);
        --i;
    }
    while (i >= 0)
    {
        num_res = (rem + (str_at(&l, i) - '0')) % 10 + '0';
        rem = (rem + str_at(&l, i) - '0') / 10;
        str_pushchar(res, num_res);
        --i;
    }
    if (rem > 0)
        str_pushchar(res, rem + '0');
    str_rev(res);
}

t_bignum        *dec_sum(t_bignum *l, t_bignum *r)
{
    t_bignum    *res;
    char        rem;

    res = big_num_create();
    res->sign = '+';
    rem = frac_sum(l->frac_part, r->frac_part, &res->frac_part);
    int_sum(l->int_part, r->int_part, &res->int_part, rem);
    return (res);
}