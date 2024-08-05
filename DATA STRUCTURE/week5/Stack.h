#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include "global.h"
#define MAXSTACK 100

typedef int StackEntry;

#if LIMITED_MEMORY == 1

typedef struct stacknode {
    StackEntry entry;
    struct stacknode *next;       // LINKED_BASED
} StackNode;

typedef struct stack {
    StackNode *top;
    int size;
} Stack;

#else

typedef struct stack {
    int top; // ARRAY_Based      //ARRAY_BASED
    StackEntry entry[MAXSTACK];
} Stack;

#endif // LIMITED_MEMORY

void Push(StackEntry e, Stack *ps);
void Pop(StackEntry *pe, Stack *ps);
int  StackEmpty(Stack *ps);
int  StackFull(Stack *ps);
void CreateStack(Stack *ps);
void StackTop(StackEntry *pe, Stack *ps);
int  StackSize(Stack *ps);
void ClearStack(Stack *ps);
void TraverseStack(Stack *ps, void (*pf)(StackEntry));
void PrintElement(StackEntry e);


#endif // STACK_H_INCLUDED
