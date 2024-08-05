#include <stdio.h>
#include "STACK_ARR.h"


void CreateStack (Stack *ps) //function to initialize stack
{
    ps->top = 0;
}


int StackEmpty (Stack *ps) // function to check the stack is empty or not
{
    return ps->top == 0;
}


int StackFull (Stack *ps) // Function to check if the stack is full or not
{
    return ps->top == MAXSTACK;
}


void push(StackEntry e, Stack *ps) // Function to push an element onto the stack
{
    if (StackFull(ps))
    {
        printf("Stack overflow\n");
        return ;
    }
    ps->entry[ps->top++] = e;
}


void pop(StackEntry *pe, Stack *ps) // Function to pop an element from the stack
{
    if (StackEmpty(ps))
    {
        printf("Stack is empty\n");
        return ;
    }
    *pe=ps->entry[--ps->top];
}



void StackTop (StackEntry *pe, Stack *ps) // Function to get the top element of the stack
{
    if (StackEmpty(ps))
    {
        printf("Stack is empty\n");
        return ;
    }
    *pe=ps->entry[ps->top -1];
}


int  StackSize (Stack *ps)
{
    return ps->top ;
}



void ClearStack (Stack *ps)
{
    ps->top = 0;
}


void TraverseStack (Stack *ps, void (*pf )(StackEntry ))
{
     for (int i=0;i< ps->top; i++)
    {
        (*pf)(ps->entry[i]);
    }
}

void printElement(StackEntry e)
{
    printf("%d ", e);
}


