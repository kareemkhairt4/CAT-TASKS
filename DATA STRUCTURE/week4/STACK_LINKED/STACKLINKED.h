#ifndef STACKLINKED_H_INCLUDED
#define STACKLINKED_H_INCLUDED

typedef int StackEntry;

typedef struct stacknode
{
    StackEntry entry;
    struct stacknode *next;
} StackNode;

typedef struct stack
{
    StackNode *top;
    int size;
} Stack;

void Push(StackEntry e, Stack *ps);
void Pop(StackEntry *pe, Stack *ps);
int StackEmpty(Stack *ps);
int StackFull(Stack *ps);
void CreateStack(Stack *ps);
void StackTop(StackEntry *pe, Stack *ps);
int StackSize(Stack *ps);
void ClearStack(Stack *ps);
void TraverseStack(Stack *ps, void (*pf)(StackEntry));
void printElement(StackEntry e);

#endif // STACKLINKED_H_INCLUDED
