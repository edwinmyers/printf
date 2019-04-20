#include "bignum.h"

void     swap_comp_str(t_string *s1, t_string *s2)
{
    t_string tmp;

    if (str_len(s1) < str_len(s2))
    {
        tmp = *s1;
        *s1 = *s2;
        *s2 = tmp;
    }
}
