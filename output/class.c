#include "stdio.h"
#include "stdlib.h"
#include "string.h"

struct Node {
    int value;
    struct Node* prevNode;
    struct Node* nextNode;
};

struct DoubleLinkedList {
    struct Node* startNode;
    struct Node* endNode;
    int size;
};

struct DoubleLinkedList* createDoubleLinkedList() {
    struct DoubleLinkedList* tmp = malloc(sizeof(struct DoubleLinkedList));
    tmp->size = 0;
    tmp->startNode = NULL;
    tmp->endNode = NULL;
    return tmp;
}

void addElementToLinkedList(struct DoubleLinkedList* list, int value) {
    struct Node* oldEndNode = list->endNode;

    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->value = value;

    if (oldEndNode != NULL) {
        newNode->prevNode = oldEndNode;
        oldEndNode->nextNode = newNode;
    } else {
        list->startNode = newNode;
    }
    list->endNode = newNode;
    list->size++;
}

// !!! Buraya listeden index i.nodu dönen bi function
struct Node* findNode(struct DoubleLinkedList* list, int index) {
    struct Node* currentNode = list->startNode;
    for (int i = 0; currentNode != NULL; i++) {
        if (i == index) {
            break;
        }
        currentNode = currentNode->nextNode;
    }
    return currentNode;
}

struct Node* searchNode(struct DoubleLinkedList* list, int value) {
    struct Node* currentNode = list->startNode;
    for(int i=0; currentNode != NULL; i++)
    {
        if(value == currentNode->value)
        {
            break;

        }
        currentNode = currentNode->nextNode;

    }
    return currentNode;
}

// !!! Buraya listeden index i silen bi function

// !!! Buraya listede arama yapan bi function

// !!! Buraya listeyi reverseleyen bi function
// Original List: 10 -> 20 -> 30 -> NULL
// Reversed List: 30 -> 20 -> 10 -> NULL

int main() {
    // struct Node node1;
    // node1.value = 10;

    // struct Node node2;
    // node2.value = 2;

    // struct Node node3;
    // node3.value = 3;

    // node1.nextNode = &node2;
    // node2.nextNode = &node3;
    // node3.nextNode = NULL;

    // for (struct Node* currentNode = &node1; currentNode != NULL; currentNode = currentNode->nextNode) {
    //     printf("Deger: %d\n", currentNode->value);
    // }
    struct DoubleLinkedList* list = createDoubleLinkedList();
    addElementToLinkedList(list, 10);
    addElementToLinkedList(list, 20);
    addElementToLinkedList(list, 30);

    for (struct Node* currentNode = list->startNode; currentNode != NULL; currentNode = currentNode->nextNode) {
        printf("Deger: %d\n", currentNode->value);
    }
    struct Node* found = searchNode(list, 10);
    printf("Deger: %d\n", found->value);


    return 1;
}
