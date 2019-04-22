#include "t_string.h"

void                str_print(t_string *s)
{
	write(1, s->data, s->size);
	write(1, "\n", 1);
}
