#include "t_string.h"

t_string            str_create_custstr(t_string *cs)
{
    int i;
    t_string res;

    i = -1;
    res.capacity = str_len(cs) + str_len(cs) * 3 / 2;
    res.data = (char *)malloc(res.capacity * sizeof(char));
    res.size = str_len(cs);
    while (++i < res.size)
        res.data[i] = cs->data[i];
    return (res);
}
