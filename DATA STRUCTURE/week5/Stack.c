#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"
#include "global.h"

#if LIMITED_MEMORY == 1        //LINKED_BASED

void CreateStack(Stack *ps)
{
    ps->top = NULL;
    ps->size = 0;
}

int StackEmpty(Stack *ps)
{
    return ps->top == NULL;
}

int StackFull(Stack *ps)
{
    return 0;           //علشان عمره مهيتملي الا لما الميموري تخلص
}

void Push(StackEntry e, Stack *ps)
{
    StackNode *pn = (StackNode *)malloc(sizeof(StackNode));

    pn->entry = e;
    pn->next = ps->top;
    ps->top = pn;
    ps->size++;
}

void Pop(StackEntry *pe, Stack *ps) // Function to pop an element from the stack
{
    if (StackEmpty(ps))
    {
        printf("Stack is Empty\n");
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
    ps->size =0;
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

void PrintElement(StackEntry e)
{
    printf("%d ",e);
}

#else                                                         //ARRAY_BASED

void CreateStack(Stack *ps)
{
    ps->top = 0;
}

int StackEmpty(Stack *ps)
{
    return ps->top == 0;
}

int StackFull(Stack *ps)
{
    return ps->top == MAXSTACK;
}

void Push(StackEntry e, Stack *ps)
{
    if (StackFull(ps))
    {
        printf("Stack overflow\n");
        return;
    }
    ps->entry[ps->top++] = e;
}

void Pop(StackEntry *pe, Stack *ps)
{
    if (StackEmpty(ps))
    {
        printf("Stack is empty\n");
        return;
    }
    *pe = ps->entry[--ps->top];
}

void StackTop(StackEntry *pe, Stack *ps)
{
    if (StackEmpty(ps))
    {
        printf("Stack is empty\n");
        return;
    }
    *pe = ps->entry[ps->top - 1];
}

int StackSize(Stack *ps)
{
    return ps->top;
}

void ClearStack(Stack *ps)
{
    ps->top = 0;
}

void TraverseStack(Stack *ps, void (*pf)(StackEntry))
{
    for (int i = 0; i < ps->top; i++)
    {
        (*pf)(ps->entry[i]);
    }
}

void PrintElement(StackEntry e)
{
    printf("%d ", e);
}

#endif // LIMITED_MEMORY
