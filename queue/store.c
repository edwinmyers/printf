#include "queue.h"

void store(const t_iterator *i, const char *elem)
{
    i->node->data = ft_strdup(elem);
}
