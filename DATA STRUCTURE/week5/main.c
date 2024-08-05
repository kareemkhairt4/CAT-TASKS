#include <stdio.h>
#include <stdlib.h>

#include "Stack.h"
#include "Stack.c"
#include "Queue.h"
#include "Queue.c"
#include "global.h"

int main()
{
    // Stack Test
    Stack s;
    StackEntry e;

    CreateStack(&s);

    Push(10, &s);
    Push(50, &s);
    Push(80, &s);
    Push(99, &s);

    printf("Stack Elements: ");
    TraverseStack(&s,PrintElement);

    printf("\n");

    printf("Stack Size: %d\n",StackSize(&s));

    StackTop(&e, &s);
    printf("Top Element: %d\n",e);

    Pop(&e,&s);
    printf("Popped Element: %d\n",e);

    printf("Stack Elements after pop: ");
    TraverseStack(&s,PrintElement);

    printf("\n");

    ClearStack(&s);
    printf("Stack Elements after clearing: ");
    TraverseStack(&s,PrintElement);

    printf("\n");


    printf("\n");
    printf("\n");


    // Queue Test
    Queue q;
    QueueEntry ee;

    CreateQueue(&q);

    Append(11, &q);
    Append(22, &q);
    Append(33, &q);

    printf("Queue Elements: ");
    TraverseQueue(&q,PrintElement);

    printf("\n");

    printf("Queue Size: %d\n",QueueSize(&q));

    Serve(&ee,&q);
    printf("Served Element: %d\n",ee);

    printf("Queue Elements after Serve: ");
    TraverseQueue(&q,PrintElement);
    printf("\n");

    ClearQueue(&q);
    printf("Queue Elements after clearing: ");
    TraverseQueue(&q,PrintElement);

    printf("\n");

    return 0;
}
