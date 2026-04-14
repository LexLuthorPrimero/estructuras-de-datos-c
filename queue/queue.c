#include <stdlib.h>
#include "queue.h"

void initQueue(Queue *q) {
    q->data = malloc(2 * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->size = 0;
    q->capacity = 2;
}

void enqueue(Queue *q, int value) {
    if (q->size == q->capacity) {
        q->capacity *= 2;
        int *temp = realloc(q->data, q->capacity * sizeof(int));
        if (temp != NULL) {
            q->data = temp;
        }
    }

    q->rear = (q->rear + 1) % q->capacity;
    q->data[q->rear] = value;
    q->size++;
}

int dequeue(Queue *q) {
    if (q->size == 0) {
        return -1;
    }

    int value = q->data[q->front];
    q->front = (q->front + 1) % q->capacity;
    q->size--;

    return value;
}

int peekQueue(Queue *q) {
    if (q->size == 0) return -1;
    return q->data[q->front];
}

int isEmptyQueue(Queue *q) {
    return q->size == 0;
}

void freeQueue(Queue *q) {
    free(q->data);
}