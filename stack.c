//
// Created by Martin on 2021-02-12.
//
#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->list = createList();
    stack->top = 0;
    return stack;
}

int stackEmpty(Stack* stack) {
    return stack->top == 0;
}

int push(Stack* stack, int key) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = key;
    insert(stack->list, node);
    stack->top++;
    return 0;
}

int pop(Stack* stack) {
    deleteNode(delete(stack->list, stack->list->tail));
    stack->top--;
    return 0;
}

int printStack(Stack* stack) {
    printListBackwards(stack->list);
}

int deleteStack(Stack* stack) {
    deleteList(stack->list);
    free(stack);
    return 0;
}
