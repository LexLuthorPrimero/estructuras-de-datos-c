#include <stdlib.h>
#include "vector.h"

void initVector(Vector *v) {
    v->data = malloc(2 * sizeof(int));
    v->size = 0;
    v->capacity = 2;
}

void push(Vector *v, int value) {
    if (v->size == v->capacity) {
        v->capacity *= 2;
        int *temp = realloc(v->data, v->capacity * sizeof(int));
        if (temp != NULL) {
            v->data = temp;
        }
    }

    v->data[v->size] = value;
    v->size++;
}

void pop(Vector *v) {
    if (v->size > 0) {
        v->size--;
    }
}

int peek(Vector *v) {
    if (v->size > 0) {
        return v->data[v->size - 1];
    }
    return -1;
}

int isEmpty(Vector *v) {
    return v->size == 0;
}

void freeVector(Vector *v) {
    free(v->data);
}