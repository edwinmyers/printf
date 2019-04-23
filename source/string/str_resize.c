#include "t_string.h"

void str_resize(t_string *s, int new_size)
{
    char *new_data;
	int i;

	i = -1;
	new_data = ft_strnew(new_size - 1);
	while (++i < s->size)
		new_data[i] = s->data[i];
	free(s->data);
	s->data = new_data;
    s->capacity = new_size;
}
