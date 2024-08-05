#include <stdio.h>
#include <stdlib.h>
#include "QUEUE_ARR.h"

void CreateQueue(Queue *pq) // Function to initialize queue
{
    pq->front = 0;
    pq->rear = -1;
    pq->size = 0;
}

int QueueEmpty(Queue *pq) // Function to check if the queue is empty
{
    return pq->size == 0;
}

int QueueFull(Queue *pq) // Function to check if the queue is full
{
    return pq->size == MAXQUEUE;
}

void Append(QueueEntry e, Queue *pq) // Function to add an element to the queue
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

void Serve(QueueEntry *pe, Queue *pq) // Function to remove an element from the queue
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
    int Size = pq->size;
    for (int i = 0; i<Size; i++)
    {
         (*pf)(pq->entry[(pq->front + i) % MAXQUEUE]);
    }
}

void printElement(QueueEntry e)
{
    printf("%d ", e);
}
