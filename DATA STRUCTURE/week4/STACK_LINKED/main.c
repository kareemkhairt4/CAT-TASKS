#include <stdio.h>
#include <stdlib.h>
#include "STACKLINKED.h"
#include "STACKLINKED.c"

int main()
{
    Stack s;
    StackEntry e;

    CreateStack(&s);

    Push(10, &s);
    Push(20, &s);      // Push elements onto the stack
    Push(30, &s);
    Push(70, &s);

    printf("Stack Elements: ");
    TraverseStack(&s, printElement);
    printf("\n");

    printf("Stack size: %d\n", StackSize(&s));

    StackTop(&e, &s);
    printf("Top element: %d\n", e);

    Pop(&e, &s); // Pop an element from the stack
    printf("Popped element: %d\n", e);

    printf("Stack elements after pop: ");
    TraverseStack(&s, printElement);
    printf("\n");

    ClearStack(&s);

    printf("Stack elements after clearing: ");
    TraverseStack(&s, printElement);
    printf("\n");

    return 0;
}
