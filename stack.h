//
// Created by Martin on 2021-02-12.
//

#ifndef LAB1_ALGORITHM_STACK_H
#define LAB1_ALGORITHM_STACK_H

#include "list.h"

typedef struct stack_
{
    List* list;
    unsigned int top;
}Stack;

Stack* createStack();
int stackEmpty(Stack* stack);
int push(Stack* stack, int key);
int pop(Stack* stack);
int printStack(Stack* stack);
int deleteStack(Stack* stack);

#endif //LAB1_ALGORITHM_STACK_H
