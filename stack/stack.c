#include "stack.h"

void initStack(Stack *s) {
    initVector(&s->v);
}

void pushStack(Stack *s, int value) {
    push(&s->v, value);
}

void popStack(Stack *s) {
    pop(&s->v);
}

int peekStack(Stack *s) {
    return peek(&s->v);
}

int isEmptyStack(Stack *s) {
    return isEmpty(&s->v);
}

void freeStack(Stack *s) {
    freeVector(&s->v);
}
