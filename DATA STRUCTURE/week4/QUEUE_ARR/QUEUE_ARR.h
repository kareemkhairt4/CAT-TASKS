#ifndef QUEUE_ARR_H_INCLUDED
#define QUEUE_ARR_H_INCLUDED

#define MAXQUEUE 100

typedef int QueueEntry;

typedef struct queue
{
    QueueEntry entry[MAXQUEUE];
    int front;
    int rear;
    int size;
} Queue;

void CreateQueue(Queue *pq);
int QueueEmpty(Queue *pq);
int QueueFull(Queue *pq);
void Append(QueueEntry e, Queue *pq);
void Serve(QueueEntry *pe, Queue *pq);
int QueueSize(Queue *pq);
void ClearQueue(Queue *pq);
void TraverseQueue(Queue *pq, void (*pf)(QueueEntry));
void printElement(QueueEntry e);


#endif // QUEUE_ARR_H_INCLUDED
