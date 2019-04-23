#include "t_string.h"

t_string            str_create_size(int size)
{
    t_string str;

    str.data = ft_strnew(size - 1);
    str.size = 0;
    str.capacity = size;

    return (str);
}
