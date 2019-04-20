#include "t_string.h"

void                str_rev(t_string *s)
{
    int i;
    char tmp;

    i = 0;
    while (i * 2 < str_len(s))
    {
        tmp = s->data[i];
        s->data[i] = s->data[str_len(s) - i - 1];
        s->data[str_len(s) - i - 1] = tmp;
        ++i;
    }
}
