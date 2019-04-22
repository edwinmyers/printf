#include "t_string.h"

t_string str_cut(t_string *str, int start, int end)
{
    t_string new_str;
	
	new_str = str_create_size(10);
    start--;
	while (++start < end && start < str_len(str))
		str_pushchar(&new_str, str_at(str, start));
	return (new_str);
}
