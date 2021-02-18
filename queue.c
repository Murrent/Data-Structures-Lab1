//
// Created by Martin on 2021-02-12.
//
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
    Node* node = createNode(key);
    insert(queue->list, node);
    if (queueEmpty(queue)) {
        queue->head = queue->list->tail;
    }
    queue->tail = queue->list->head;
    return 1;
}

int dequeue(Queue* queue) {
    if (queue == NULL || queue->head == NULL) return 0;
    Node* tmp = delete(queue->list, queue->head);
    deleteNode(tmp);
    queue->head = queue->list->tail;
    if (queue->head == NULL)
        queue->tail = NULL;
    return 1;
}

int printQueue(Queue* queue) {
    if (queue == NULL || queue->list == NULL) return 0;
    printListBackwards(queue->list);
    return 1;
}

int deleteQueue(Queue* queue) {
    if (queue == NULL) return 0;
    if (queue->list != NULL)
        deleteList(queue->list);
    free(queue);
    return 1;
}
