#include "t_string.h"

void str_push_cs(t_string *l, t_string *r)
{
    int i;

    i = -1;
    while (++i < str_len(r))
        str_pushchar(l, str_at(r, i));
}
