#include "queue.h"

t_iterator first(t_queue *q)
{
    t_iterator res;

    res.node = q->head;
    return (res);
}

t_iterator last(t_queue *q)
{
    t_iterator res;

    res.node = q->tail;
    return (res);
}

t_iterator prev(t_iterator *i)
{
    i->node = i->node->prev;
    return (*i);
}

t_iterator next(t_iterator *i)
{
    i->node = i->node->next;
    return (*i);
}
