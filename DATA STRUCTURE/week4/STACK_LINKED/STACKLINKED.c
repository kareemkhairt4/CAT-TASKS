#include <stdio.h>
#include <stdlib.h>
#include "STACKLINKED.h"

void CreateStack(Stack *ps) //function to initialize stack
{
    ps->top = NULL;
    ps->size = 0;
}

int StackEmpty(Stack *ps) // function to check the stack is empty or not
{
    return ps->top == NULL;
}

int StackFull(Stack *ps) // Function to check if the stack is full or not
{
    return 0;
}

void Push(StackEntry e, Stack *ps) // Function to push an element onto the stack
{
    StackNode *pn = (StackNode *)malloc(sizeof(StackNode));
    if (pn == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    pn->entry = e;
    pn->next = ps->top;
    ps->top = pn;
    ps->size++;
}

void Pop(StackEntry *pe, Stack *ps) // Function to pop an element from the stack
{
    if (StackEmpty(ps))
    {
        printf("Stack is empty\n");
        return;
    }
    StackNode *pn = ps->top;
    *pe = ps->top->entry;
    ps->top = ps->top->next;
    free(pn);
    ps->size--;
}

void StackTop(StackEntry *pe, Stack *ps) // Function to get the top element of the stack
{
    if (StackEmpty(ps))
    {
        printf("Stack is empty\n");
        return;
    }
    *pe = ps->top->entry;
}

int StackSize(Stack *ps)
{
    return ps->size;
}

void ClearStack(Stack *ps)
{
    StackNode *pn;
    while (ps->top)
    {
        pn = ps->top;
        ps->top = ps->top->next;
        free(pn);
    }
    ps->size = 0;
}

void TraverseStack(Stack *ps, void (*pf)(StackEntry))
{
    StackNode *pn = ps->top;
    while (pn)
    {
        (*pf)(pn->entry);
        pn = pn->next;
    }
}

void printElement(StackEntry e)
{
    printf("%d ", e);
}
