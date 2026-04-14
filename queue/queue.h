#ifndef QUEUE_H
#define QUEUE_H

typedef struct {
    int *data;
    int front;
    int rear;
    int size;
    int capacity;
} Queue;

void initQueue(Queue *q);
void enqueue(Queue *q, int value);
int dequeue(Queue *q);
int peekQueue(Queue *q);
int isEmptyQueue(Queue *q);
void freeQueue(Queue *q);

#endif