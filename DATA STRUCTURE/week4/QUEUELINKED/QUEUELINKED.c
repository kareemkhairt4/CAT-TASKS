#include <stdio.h>
#include <stdlib.h>
#include "QUEUELINKED.h"


  void CreateQueue(Queue *pq)
{
    pq->front = NULL;
    pq->rear = NULL;                 // Function to initialize queue
    pq->size = 0;
}

int QueueEmpty(Queue *pq)
{
    return pq->size ==0; // !pq->size // !(pq -> rear ) or !(pq -> rear )
}

int QueueFull(Queue *pq)
{
    return 0;    // عمرها ما تتملي الا لما الذاكره نفسها تتملي علشان كده رجعنا ب 0
}

void Append(QueueEntry e, Queue *pq)
{
    QueueNode *pn =(QueueNode *)malloc(sizeof(QueueNode));

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
    *pe =pn->entry;
    pq->front =pn->next;
    free(pn);
    pq->size--;

    if (!pq->front)
     {
        pq->front= NULL;
    }
     pq->size--;
}

int QueueSize(Queue *pq)
{
    return pq->size;
}

void ClearQueue(Queue *pq)
{
    while (pq ->front)
    {
        pq->rear = pq->front->next ;
        free(pq->front);
        pq->front = pq->rear ;
    }
  pq->size =0 ;
}

void TraverseQueue(Queue *pq, void (*pf)(QueueEntry))
{
    for (QueueNode *pn =pq->front;pn ;pn= pn->next)
        {
        (*pf)(pn->entry);
        }
}

void printElement(QueueEntry e)
{
    printf("%d ", e);
}
