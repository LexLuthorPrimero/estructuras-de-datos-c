#ifndef STACK_H
#define STACK_H

#include "../vector/vector.h"

typedef struct {
    Vector v;
} Stack;

void initStack(Stack *s);
void pushStack(Stack *s, int value);
void popStack(Stack *s);
int peekStack(Stack *s);
int isEmptyStack(Stack *s);
void freeStack(Stack *s);

#endif