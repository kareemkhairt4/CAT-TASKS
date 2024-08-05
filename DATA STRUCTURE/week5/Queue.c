#include <stdio.h>
#include <stdlib.h>
#include "global.h"
#include "Queue.h"

#if LIMITED_MEMORY == 1                   //LINKED_BASED

void CreateQueue(Queue *pq)
{
    pq->front = NULL;
    pq->rear = NULL;
    pq->size = 0;
}

int QueueEmpty(Queue *pq)
{
    return pq->size == 0; // !pq->size // !(pq -> rear ) or !(pq -> rear )
}

int QueueFull(Queue *pq)
{
    return 0; // The queue will never be full unless the memory is full
}

void Append(QueueEntry e, Queue *pq)
{
    QueueNode *pn = (QueueNode *)malloc(sizeof(QueueNode));

    pn->entry = e;
    pn->next = NULL;

    if (QueueEmpty(pq))
    {
        pq->front = pn;
    }
    else
    {
        pq->rear->next = pn;
    }
    pq->rear = pn;
    pq->size++;
}

void Serve(QueueEntry *pe, Queue *pq) // Function to remove an element from the queue
{
    if (QueueEmpty(pq))
    {
        printf("Queue is empty\n");
        return;
    }

    QueueNode *pn = pq->front;
    *pe = pn->entry;
    pq->front = pn->next;
    free(pn);
    pq->size--;

    if (!pq->front)
    {
        pq->rear = NULL;
    }
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void ClearQueue(Queue *pq)
{
    while (pq->front)
    {
        pq->rear = pq->front->next;
        free(pq->front);
        pq->front = pq->rear;
    }
    pq->size = 0;
}

void TraverseQueue(Queue *pq, void (*pf)(QueueEntry))
{
    for (QueueNode *pn = pq->front; pn; pn = pn->next)
    {
        (*pf)(pn->entry);
    }
}

void PrintElement(QueueEntry e)
{
    printf("%d ", e);
}

#else                                             //ARRAY_BASED

void CreateQueue(Queue *pq)
{
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

int QueueEmpty(Queue *pq)
{
    return pq->size == 0;
}

int QueueFull(Queue *pq)
{
    return pq->size == MAXQUEUE;
}

void Append(QueueEntry e, Queue *pq)
{
    if (QueueFull(pq))
    {
        printf("Queue is full\n");
        return;
    }
    pq->rear = (pq->rear + 1) % MAXQUEUE;
    pq->entry[pq->rear] = e;
    pq->size++;
}

void Serve(QueueEntry *pe, Queue *pq)
{
    if (QueueEmpty(pq))
    {
        printf("Queue is empty\n");
        return;
    }
    *pe = pq->entry[pq->front];
    pq->front = (pq->front + 1) % MAXQUEUE;
    pq->size--;
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void ClearQueue(Queue *pq)
{
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

void TraverseQueue(Queue *pq, void (*pf)(QueueEntry))
{
    int size = pq->size;
    for (int i = 0; i < size; i++)
    {
        (*pf)(pq->entry[(pq->front + i) % MAXQUEUE]);
    }
}


#endif // LIMITED_MEMORY
