#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    int *data;
    int size;
    int capacity;
} Vector;

void initVector(Vector *v);
void push(Vector *v, int value);
void pop(Vector *v);
int peek(Vector *v);
int isEmpty(Vector *v);
void freeVector(Vector *v);

#endif