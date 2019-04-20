#include "t_string.h"

void                str_destroy(t_string *s)
{
    free(s->data);
    s->data = NULL;
    s->capacity = 0;
    s->size = 0;
}
