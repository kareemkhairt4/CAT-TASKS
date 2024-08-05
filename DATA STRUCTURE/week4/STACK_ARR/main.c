#include <stdio.h>
#include "STACK_ARR.h"

int main()
{

    Stack s;
    StackEntry e;


    CreateStack(&s);


    push(10, &s);
    push(20, &s);      // Push elements onto the stack
    push(30, &s);
    push(70, &s);

    printf("Stack Elements: ");
    TraverseStack(&s, printElement); //هنا داله traversestack بتعدي علي كل element فانا عملت داله الطباعه علشان اعدي علي كل واحد اطبعه
    printf("\n");
    printf("\n");


    printf("Stack size: %d\n", StackSize(&s));
    printf("\n");


    StackTop(&e, &s);
    printf("Top element: %d\n", e);
    printf("\n");


    pop(&e, &s);                        // Pop an element from the stack
    printf("Popped element: %d\n", e);
    printf("\n");


    printf("Stack elements aftttter pop: ");
    TraverseStack(&s, printElement);         // Print stack elements after popping
    printf("\n");
    printf("\n");


    ClearStack(&s);


    printf("Stack elements after clearing: ");
    TraverseStack(&s, printElement);               // Print stack elements after clearing
    printf("\n");
}
