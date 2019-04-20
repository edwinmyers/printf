#include "t_string.h"

t_string            str_create_size(int size)
{
    t_string str;

    str.data = (char *)malloc(sizeof(char) * size);
    str.size = 0;
    str.capacity = size;

    return str;
}
