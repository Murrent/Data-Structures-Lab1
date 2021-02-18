#include <stdio.h>
#include "list.h"
#include "stack.h"
#include "queue.h"

int printKey(Node* node) {
    if (node == NULL) {
        printf("NULL\n");
        return 0;
    }
    printf("key: %d\n", node->key);
    return 1;
}

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

    printf("Maxmimum 1 ");
    printKey(maximum(list1));
    printf("Minimum 1 ");
    printKey(minimum(list1));
    printf("Maxmimum 2 ");
    printKey(maximum(list2));
    printf("Minimum 2 ");
    printKey(minimum(list2));

    printf("successor 1 ");
    printKey(successor(list1, search(list1, 5)));
    printf("successor 2 ");
    printKey(successor(list2, search(list2, 9)));
    printf("predecessor 1 ");
    printKey(predecessor(list1, search(list1, 5)));
    printf("predecessor 2 ");
    printKey(predecessor(list2, search(list2, 9)));

    printf("predecessor max 1 ");
    printKey(predecessor(list1, maximum(list1)));
    printf("predecessor max 2 ");
    printKey(predecessor(list2, maximum(list2)));

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
    freeStack(stack);
    freeList(list1);
    freeList(list2);
    return 0;
}

