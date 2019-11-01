#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct {
    int key;
} Item;

typedef struct NodeList *Pointer;

typedef struct NodeList {
    Item element;
    Pointer next;
    Pointer previous;
}NodeList;

typedef struct {
    Pointer first;
    int size;
} DoubleLinkedList;

void initList(DoubleLinkedList *list){
    list->first=NULL;
    list->size=0;
}
void printList(DoubleLinkedList *list);
void printInverseList(DoubleLinkedList *list);
void destroyList(DoubleLinkedList *list);
bool insert(DoubleLinkedList *list, Item x);
bool isEmpty(DoubleLinkedList *list){
    return(list->size==0);
}
bool search(DoubleLinkedList *list, int key);
bool removeElement(DoubleLinkedList *list, int key, Item *item);
bool removeFirst(DoubleLinkedList *list, Item *item);
bool removeLast(DoubleLinkedList *list, Item *item);
int sizeOfList(DoubleLinkedList *list){
    return(list->size);
}
Item first(DoubleLinkedList *list){
    return(list->first);
}
Item last(DoubleLinkedList *list){
    return(list->first->previous);
}

int main() {
    initList(&list);
    printList(&list);
    printInverseList(&list);
    destroyList(&list);
    //insert(&list, Item x);
    isEmpty(&list);
    //search(&list, int key);
    //removeElement(&list, int key, Item * item);
    //removeFirst(&list, Item * item);
    //removeLast(&list, Item * item);
    sizeOfList(&list);
    first(&list);
    last(&list);

}
