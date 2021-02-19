//
// Created by Martin on 2021-02-19.
//

#include <stdio.h>
#include "../queue/queue.h"

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
    testQueue();

    return 0;
}