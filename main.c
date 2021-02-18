#include <stdio.h>
#include "list.h"
#include "stack.h"
#include "queue.h"

int main() {
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

    printf("Maxmimum 1 %d\n", maximum(list1)->key);
    printf("Minimum 1 %d\n", minimum(list1)->key);
    printf("Maxmimum 2 %d\n", maximum(list2)->key);
    printf("Minimum 2 %d\n", minimum(list2)->key);

    printf("successor 1 %d\n", successor(list1, search(list1, 5))->key);
    printf("successor 2 %p\n", successor(list2, search(list2, 9)));
    printf("predecessor 1 %d\n", predecessor(list1, search(list1, 5))->key);
    printf("predecessor 2 %d\n", predecessor(list2, search(list2, 9))->key);

    printf("predecessor max 1 %d\n", predecessor(list1, maximum(list1))->key);
    printf("predecessor max 2 %d\n", predecessor(list2, maximum(list2))->key);

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

    printf("\n");

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
    freeStack(stack);
    freeList(list1);
    freeList(list2);
    return 0;
}

