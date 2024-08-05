#include <stdio.h>
#include <stdlib.h>
#include "QUEUE_ARR.h"
#include "QUEUE_ARR.c"

int main()
{
    Queue q;
    QueueEntry e;

    CreateQueue(&q);

    Append(10, &q);
    Append(20, &q);
    Append(30, &q);
    Append(40, &q);

    printf("Queue Elements: ");
    TraverseQueue(&q, printElement);
    printf("\n");
    printf("\n");

    printf("Queue size: %d\n", QueueSize(&q));
    printf("\n");

    Serve(&e, &q);
    printf("Served Element: %d\n", e);
    printf("\n");

    printf("Queue elements after Served: ");
    TraverseQueue(&q, printElement);
    printf("\n");
    printf("\n");

    ClearQueue(&q);

    printf("Queue elements after clearing: ");
    TraverseQueue(&q, printElement);
    printf("\n");

    return 0;
}
