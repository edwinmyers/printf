#include "queue.h"

char *fetch(const t_iterator *i)
{
    return (i->node->data);
}
