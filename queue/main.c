#include <stdio.h>
#include "queue.h"

int main() {
    Queue q;
    initQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    printf("Sale: %d\n", dequeue(&q));
    printf("Frente: %d\n", peekQueue(&q));

    enqueue(&q, 40);
    enqueue(&q, 50);

    while (!isEmptyQueue(&q)) {
        printf("%d ", dequeue(&q));
    }

    printf("\n");

    freeQueue(&q);
    return 0;
}