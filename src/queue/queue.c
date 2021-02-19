// Martin Vickgren, Samson Tesfalem
#include "queue.h"
#include <stdlib.h>

Queue* createQueue() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->list = createList();
    queue->head = NULL;
    queue->tail = NULL;
    return queue;
}

int queueEmpty(Queue* queue) {
    if (queue == NULL) return 0;
    return queue->head == NULL;
}

int enqueue(Queue* queue, int key) {
    if (queue == NULL) return 0;
    insert(queue->list, createNode(key));
    if (queueEmpty(queue)) {
        queue->head = queue->list->tail;
    }
    queue->tail = queue->list->head;
    return 1;
}

Node* dequeue(Queue* queue) {
    if (queue == NULL) return NULL;
    Node* node = detachNode(queue->list, queue->head);
    queue->head = queue->list->tail;
    if (queue->head == NULL)
        queue->tail = NULL;
    return node;
}

int printQueue(Queue* queue) {
    if (queue == NULL || queue->list == NULL) return 0;
    printListBackwards(queue->list);
    return 1;
}

int freeQueue(Queue* queue) {
    if (queue == NULL) return 0;
    if (queue->list != NULL)
        freeList(queue->list);
    free(queue);
    return 1;
}
