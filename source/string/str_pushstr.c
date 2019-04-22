#include "t_string.h"

void                str_pushstr(t_string *s, char *str)
{
    int len;
    int i;

    i = -1;
    len = ft_strlen(str);
    if (s->capacity < s->size + len)
        str_resize(s, (s->size + len) * 2);
    while (++i < len)
        str_pushchar(s, str[i]);
}
