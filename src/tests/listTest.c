// Martin Vickgren, Samson Tesfalem
#include <stdio.h>
#include "../list/list.h"

// MAXIMUM TESTS
void maximumTest1(List* list) {
    if (list == NULL || maximum(list) == NULL || maximum(list)->key != 10)
        printf("maximum test 1 failed\n");
    else
        printf("maximum test 1 succeeded\n");
}

void maximumTest2(List* list) {
    if (list == NULL || maximum(list) == NULL || maximum(list)->key != 9)
        printf("maximum test 2 failed\n");
    else
        printf("maximum test 2 succeeded\n");
}

// MINIMUM TESTS
void minimumTest1(List* list) {
    if (list == NULL || minimum(list) == NULL || minimum(list)->key != 1)
        printf("minimum test 1 failed\n");
    else
        printf("minimum test 1 succeeded\n");
}

void minimumTest2(List* list) {
    if (list == NULL || minimum(list) == NULL || minimum(list)->key != 1)
        printf("minimum test 2 failed\n");
    else
        printf("minimum test 2 succeeded\n");
}

// SUCCESSOR TESTS
void successorTest1(List* list) {
    if (list == NULL || successor(list, search(list, 5)) == NULL || (successor(list, search(list, 5))->key != 7))
        printf("successor test 1 failed\n");
    else
        printf("successor test 1 succeeded\n");
}

void successorTest2(List* list) {
    if (list == NULL || successor(list, search(list, 9)) != NULL)
        printf("successor test 2 failed\n");
    else
        printf("successor test 2 succeeded\n");
}

// PREDECESSOR TESTS
void predecessorTest1(List* list) {
    if (list == NULL || predecessor(list, search(list, 5)) == NULL || (predecessor(list, search(list, 5))->key != 3))
        printf("predecessor test 1 failed\n");
    else
        printf("predecessor test 1 succeeded\n");
}

void predecessorTest2(List* list) {
    if (list == NULL || predecessor(list, search(list, 9)) == NULL || (predecessor(list, search(list, 9))->key != 6))
        printf("predecessor test 2 failed\n");
    else
        printf("predecessor test 2 succeeded\n");
}

void predecessorTest3(List* list1, List* list2) {
    if (list2 == NULL || predecessor(list2, maximum(list1)) == NULL || (predecessor(list2, maximum(list1))->key != 9))
        printf("predecessor test 3 failed\n");
    else
        printf("predecessor test 3 succeeded\n");
}

void predecessorTest4(List* list1, List* list2) {
    if (list1 == NULL || predecessor(list1, maximum(list2)) == NULL || (predecessor(list1, maximum(list2))->key != 8))
        printf("predecessor test 4 failed\n");
    else
        printf("predecessor test 4 succeeded\n");
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
    predecessorTest3(list1, list2);
    predecessorTest4(list1, list2);

    freeList(list1);
    freeList(list2);
}

int main() {
    testList();
    return 0;
}