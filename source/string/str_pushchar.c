#include "t_string.h"

void                str_pushchar(t_string *s, char c)
{
    if (s->size == s->capacity)
        str_resize(s, s->size + 25);
    s->data[s->size] = c;
    s->size++;
}
