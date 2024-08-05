#ifndef STACK_ARR_H_INCLUDED
#define STACK_ARR_H_INCLUDED

#define MAXSTACK 100

typedef int StackEntry;
typedef struct stack
{
    int top;
    StackEntry entry[MAXSTACK];
}Stack;

void Push               (StackEntry e  , Stack *ps);
void Pop                (StackEntry *pe, Stack *ps);
int  StackEmpty         (Stack *ps);
int  StackFull          (Stack *ps);
void CreateStack        (Stack *ps);
void StackTop           (StackEntry *pe, Stack *ps);
int  StackSize          (Stack *ps);
void ClearStack         (Stack *ps);
void TraverseStack      (Stack *ps, void (*pf)(StackEntry));
void printElement       (StackEntry e);

#endif // STACK_ARR_H_INCLUDED
