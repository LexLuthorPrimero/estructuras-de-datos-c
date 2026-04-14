#include <stdio.h>
#include "vector.h"

int main() {
    Vector v;
    initVector(&v);

    push(&v, 10);
    push(&v, 20);
    push(&v, 30);

    printf("Ultimo: %d\n", peek(&v));

    pop(&v);

    for (int i = 0; i < v.size; i++) {
        printf("%d ", v.data[i]);
    }

    printf("\n");

    freeVector(&v);
    return 0;
}