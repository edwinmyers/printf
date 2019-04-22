#include "t_string.h"

t_string str_custjoin(t_string *l, t_string *r)
{
    t_string res;

    res = str_create_custstr(l);
    str_push_cs(&res, r);
    return (res);
}