#include "t_string.h"

void str_resize(t_string *s, int new_size)
{
    char *new_data;
	int i;

	i = -1;
	new_data = (char *)malloc(sizeof(char) * new_size);
	while (++i < s->size)
		new_data[i] = s->data[i];
	free(s->data);
	s->data = new_data;
    s->capacity = new_size;
}
