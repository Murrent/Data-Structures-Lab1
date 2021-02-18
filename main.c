#include <stdio.h>
#include "list.h"
#include "stack.h"
#include "queue.h"

// MAXIMUM TESTS
void maximumTest1(List* list) {
    if (list == NULL || maximum(list) == NULL || maximum(list)->key != 10)
        printf("maximum test failed\n");
    else
        printf("maximum test succeeded\n");
}

void maximumTest2(List* list) {
    if (list == NULL || maximum(list) == NULL || maximum(list)->key != 9)
        printf("maximum test failed\n");
    else
        printf("maximum test succeeded\n");
}

// MINIMUM TESTS
void minimumTest1(List* list) {
    if (list == NULL || minimum(list) == NULL || minimum(list)->key != 1)
        printf("minimum test failed\n");
    else
        printf("minimum test succeeded\n");
}

void minimumTest2(List* list) {
    if (list == NULL || minimum(list) == NULL || minimum(list)->key != 1)
        printf("minimum test failed\n");
    else
        printf("minimum test succeeded\n");
}

// SUCCESSOR TESTS
void successorTest1(List* list) {
    if (list == NULL || successor(list, search(list, 5)) == NULL)
        printf("successor test failed\n");
    else if (successor(list, search(list, 5))->key == 7)
        printf("successor test succeeded\n");
}

void successorTest2(List* list) {
    if (list == NULL || successor(list, search(list, 9)) != NULL)
        printf("successor test failed\n");
    else
        printf("successor test succeeded\n");
}

// PREDECESSOR TESTS
void predecessorTest1(List* list) {
    if (list == NULL || predecessor(list, search(list, 5)) == NULL)
        printf("predecessor test failed\n");
    else if (predecessor(list, search(list, 5))->key == 3)
        printf("predecessor test succeeded\n");
}

void predecessorTest2(List* list) {
    if (list == NULL || predecessor(list, search(list, 9)) == NULL)
        printf("predecessor test failed\n");
    else if (predecessor(list, search(list, 9))->key == 6)
        printf("predecessor test succeeded\n");
}

void predecessorTest3(List* list) {
    if (list == NULL || predecessor(list, maximum(list)) == NULL)
        printf("predecessor test failed\n");
    else if (predecessor(list, maximum(list))->key == 8)
        printf("predecessor test succeeded\n");
}

void predecessorTest4(List* list) {
    if (list == NULL || predecessor(list, maximum(list)) == NULL)
        printf("predecessor test failed\n");
    else if (predecessor(list, maximum(list))->key == 6)
        printf("predecessor test succeeded\n");
}

void testList() {
    List* list1 = createList();
    insert(list1, createNode(7));
    insert(list1, createNode(8));
    insert(list1, createNode(10));
    insert(list1, createNode(5));
    insert(list1, createNode(1));
    insert(list1, createNode(3));

    List* list2 = createList();
    insert(list2, createNode(2));
    insert(list2, createNode(1));
    insert(list2, createNode(6));
    insert(list2, createNode(9));
    insert(list2, createNode(2));
    insert(list2, createNode(5));


    printf("List 1\n");
    printList(list1);
    printf("List 2\n");
    printList(list2);

    maximumTest1(list1);
    minimumTest1(list1);
    maximumTest2(list2);
    minimumTest2(list2);

    successorTest1(list1);
    successorTest2(list2);

    predecessorTest1(list1);
    predecessorTest2(list2);
    predecessorTest3(list1);
    predecessorTest4(list2);

    freeList(list1);
    freeList(list2);
}

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

void testQueue() {
    printf("Queue\n");
    Queue* queue = createQueue();
    enqueue(queue, 2);
    enqueue(queue, 0);
    enqueue(queue, 0);
    enqueue(queue, 1);
    enqueue(queue, 0);
    enqueue(queue, 6);
    enqueue(queue, 0);
    enqueue(queue, 8);
    printQueue(queue);

    freeQueue(queue);
}

int main() {
    testList();
    testStack();
    testQueue();
    return 0;
}

