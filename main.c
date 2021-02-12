#include <stdio.h>
#include "list.h"

int main() {
    List* list = createList();
    Node* node1 = createNode();
    Node* node2 = createNode();
    Node* node3 = createNode();
    Node* node4 = createNode();
    Node* node5 = createNode();
    node1->key = 32;
    node2->key = 15;
    node3->key = 13;
    node4->key = 16;
    node5->key = 18;
    insert(list, node1);
    insert(list, node2);
    insert(list, node3);
    insert(list, node4);
    insert(list, node5);

    printList(list);
    printf("%d\n", successor(list, node4)->key);
    printf("%d", predecessor(list, node4)->key);
    return 0;
}

