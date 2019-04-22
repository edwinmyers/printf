#include "t_string.h"

char                *to_cstr(t_string *str)
{
    int i;
    char *res;

    i = -1;
    res = (char *)malloc(sizeof(char) * str_len(str));
    while (++i < str_len(str))
        res[i] = str->data[i];
    res[i] = 0;
    return(res);
}