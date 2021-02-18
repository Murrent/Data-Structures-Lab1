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
    Node* node = createNode(key);
    insert(stack->list, node);
    stack->top++;
    return 1;
}

int pop(Stack* stack) {
    if (stack == NULL) return 0;
    deleteNode(delete(stack->list, stack->list->tail));
    stack->top--;
    return 1;
}

int printStack(Stack* stack) {
    if (stack == NULL) return 0;
    printListBackwards(stack->list);
}

int deleteStack(Stack* stack) {
    if (stack == NULL) return 0;
    deleteList(stack->list);
    free(stack);
    return 1;
}
