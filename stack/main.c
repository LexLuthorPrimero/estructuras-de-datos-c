#include <stdio.h>
#include "stack.h"

int main() {
    Stack s;
    initStack(&s);

    pushStack(&s, 10);
    pushStack(&s, 20);
    pushStack(&s, 30);

    printf("Top: %d\n", peekStack(&s));

    popStack(&s);

    printf("Top: %d\n", peekStack(&s));

    freeStack(&s);
    return 0;
}