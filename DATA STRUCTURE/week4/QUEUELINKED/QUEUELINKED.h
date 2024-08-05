#ifndef QUEUELINKED_H_INCLUDED
#define QUEUELINKED_H_INCLUDED

typedef int QueueEntry;

typedef struct queueNode {
    QueueEntry entry;
    struct queueNode *next;
} QueueNode;

typedef struct queue {
    QueueNode *front;
    QueueNode *rear;
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

#endif // QUEUELINKED_H_INCLUDED
