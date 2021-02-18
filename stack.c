//
// Created by Martin on 2021-02-12.
//
#include "stack.h"
#include <stdlib.h>


Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->list = createList();
    stack->top = 0;
    return stack;
}

int stackEmpty(Stack* stack) {
    if (stack == NULL) return 0;
    return stack->top == 0;
}

int push(Stack* stack, int key) {
    if (stack == NULL) return 0;
    insert(stack->list, createNode(key));
    stack->top++;
    return 1;
}

int pop(Stack* stack) {
    if (stack == NULL) return 0;
    freeNode(detachNode(stack->list, stack->list->head));
    stack->top--;
    return 1;
}

int printStack(Stack* stack) {
    if (stack == NULL) return 0;
    printListBackwards(stack->list);
    return 1;
}

int freeStack(Stack* stack) {
    if (stack == NULL) return 0;
    freeList(stack->list);
    free(stack);
    return 1;
}
