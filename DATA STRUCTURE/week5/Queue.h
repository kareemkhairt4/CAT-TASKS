#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include "global.h"

#define MAXQUEUE 100

typedef int QueueEntry;

#if LIMITED_MEMORY == 1

typedef struct queueNode {
    QueueEntry entry;
    struct queueNode *next;               // LINKED_BASED
} QueueNode;

typedef struct queue {
    QueueNode *front;
    QueueNode *rear;
    int size;
} Queue;

#else

typedef struct queue {
    QueueEntry entry[MAXQUEUE];
    int front;                             // ARRAY_BASED
    int rear;
    int size;
} Queue;

#endif // LIMITED_MEMORY

void CreateQueue(Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
void Append(QueueEntry e, Queue *pq);
void Serve(QueueEntry *pe, Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq, void (*pf)(QueueEntry));
void PrintElement(QueueEntry e);


#endif // QUEUE_H_INCLUDED
