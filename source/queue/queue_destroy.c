#include "queue.h"

void queue_destroy(t_queue *q)
{
    t_iterator i = first(q);
    t_iterator i_del;

    while (i.node) {
        i_del = i;
        next(&i);
        queue_del(q, &i_del);
    }
}
