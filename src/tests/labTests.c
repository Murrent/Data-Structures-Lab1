// Martin Vickgren, Samson Tesfalem

#include <stdio.h>
#include "../list/list.h"
#include "../stack/stack.h"
#include "../queue/queue.h"



void labTests() {
    printf("Lab Tests\nlist\n");
    List* list = createList();
    insert(list, createNode(1));
    insert(list, createNode(3));
    insert(list, createNode(2));
    printList(list);
    detachNode(list, predecessor(list, search(list, 2)));
    printf("\n");
    printList(list);
    detachNode(list, predecessor(list, search(list, 1)));
    printf("\n");
    printList(list);

    Queue* q = createQueue();
    enqueue(q, 1);
    printf("queue\n");
    printQueue(q);
    enqueue(q, 2);
    printf("\n");
    printQueue(q);
    Stack* s = createStack();
    push(s, dequeue(q)->key);
    printf("\n");
    printQueue(q);
    printf("stack\n");
    printStack(s);

    freeList(list);
    freeQueue(q);
    freeStack(s);
}

int main() {
    labTests();

    return 0;
}