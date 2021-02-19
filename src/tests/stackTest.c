// Martin Vickgren, Samson Tesfalem

#include <stdio.h>
#include "../stack/stack.h"

void testStack() {
    printf("Stack\n");
    Stack* stack = createStack();
    push(stack, 2);
    push(stack, 0);
    push(stack, 0);
    push(stack, 0);
    push(stack, 0);
    push(stack, 2);
    push(stack, 2);
    push(stack, 2);
    printStack(stack);

    freeStack(stack);
}

int main() {
    testStack();

    return 0;
}