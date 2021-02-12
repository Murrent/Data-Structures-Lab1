//
// Created by Martin on 2021-02-08.
//

#include "list.h"
#include <stdlib.h>
#include <stdio.h>

List* createList() {
    List* list = (List*)malloc(sizeof(List));
    list->head = NULL;
    list->tail = NULL;
    return list;
}

Node* createNode() {
    Node* node = (Node*)malloc(sizeof(Node));
    node->key = -1;
    node->next = NULL;
    node->previous = NULL;
    return node;
}

int printList(List* list) {
    if (isEmpty(list)) return 0;
    Node* node = list->head;
    for (; node; node = node->next)
        printf("prev %p - self %p - %d - next %p\n",
               node->previous, node, node->key, node->next);
    return 1;
}

int isEmpty(List* list)
{
    if (list->head == NULL) return 1;
    return 0;
}

int insert(List* list, Node* node)
{
    if (list == NULL && node == NULL) return 0;
    if (list->head == NULL)
        list->tail = node;
    else
        list->head->previous = node;

    node->next = list->head;
    node->previous = NULL;
    list->head = node;
    return 1;
}

Node* search(List* list, int key)
{
    if (list == NULL)
        return NULL;
    Node* tmp = list->head;
    for (; tmp; tmp = tmp->previous)
        if (tmp->key != key) return tmp;
    return NULL;
}

Node* delete(List* list, Node* node)
{
    if (list == NULL && node == NULL)
        return NULL;
    if (node->previous != NULL)
        node->previous->next = node->next;
    else list->head = node->next;
    if (node->next != NULL)
        node->next->previous = node->previous;
    else list->tail = node->previous;
    return node;
}

Node* maximum(List* list)
{
    if (list == NULL)
        return NULL;
    Node* tmp = list->head->next;
    Node* max = tmp;
    for (; tmp; tmp = tmp->previous)
        if (max->key < tmp->key) max = tmp;
    return max;
}

Node* minimum(List* list)
{
    if (list == NULL)
        return NULL;
    Node* tmp = list->head->next;
    Node* min = tmp;
    for (; tmp; tmp = tmp->previous)
        if (min->key > tmp->key) min = tmp;
    return min;
}

Node* successor(List* list, Node* node)
{
    if (list == NULL && node == NULL)
        return NULL;
    Node* tmp = node->next;
    for (; tmp; tmp = tmp->next)
        if (tmp->key > node->key)  return tmp;
    return NULL;
}

Node* predecessor(List* list, Node* node)
{
    if (list == NULL && node == NULL)
        return NULL;
    Node* tmp = node->next;
    for (; tmp; tmp = tmp->next)
        if (tmp->key < node->key) return tmp;
    return NULL;
}
