#include "queue.h"

void queue_create(t_queue *q)
{
    q->head = NULL;
    q->tail = NULL;
	q->size = 0;
}
