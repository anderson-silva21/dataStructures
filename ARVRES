#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
    int key;
} Object;

typedef struct NodeTree *PtrTree;

typedef struct NodeTree {
    Object element;
    PtrTree left;
    PtrTree right;
} NodeTree;

int sizeTree(PtrTree *node);
int maxDepth(PtrTree *node);

void initTree(PtrTree *node){
    *node = NULL;
}

bool isEmpty(PtrTree *node){
    return(*node == NULL);
}

void destroyTree(PtrTree *node);

void preOrder(PtrTree *node){
    if(*node = NULL) return;
    printf("%d", (*node)->element.key);
    preOrder(&(*node)->left);
    preOrder(&(*node)->right);
}

void posOrder(PtrTree *node){
    if(*node == NULL) return;
    posOrder(&(*node)->left);
    posOrder(&(*node)->right);
    printf("%d", (*node)->element.key);
}

void inOrder(PtrTree *node){
    if(*node ==  NULL) return;
    inOrder(&(*node)->left);
    printf("%d", (*node)->element.key);
    inOrder(&(*node)->right);
}

bool insertItem(PtrTree *node, Object x){
    if(isEmpty(node)){

    }
}

bool findItem(PtrTree *node, int key, Object *ret){
    if(*node == NULL)
        return (false);
    if((*node)->element.key == key)
        return (true);
    if(key < (*node)->element.key) {
        (*node)->left;
    }else{
        (*node)->right;
    }
}
PtrTree getMinAux (PtrTree *node){  //usado na remoção
    return((*node)->right);
}

PtrTree getMaxAux (PtrTree *node); //usado na remoção, nem vou usar hehe

bool removeItem(PtrTree *node, Object x){
    ////////////////////////////////////////////////////////////////////////////
    if((*node)== NULL)
        return (false);
    ////////////////////////////////////////////////////////////////////////////
    if((*node)->element.key == x.key){
        if((*node)->left == NULL)  // case 1
            (*node) = (*node)->right;
        else if((*node)->right == NULL && (*node)->left == NULL) // case 2
            (*node) = (*node)->right;
        else if((*node)->right == NULL) // case 3
            (*node) = (*node)->left;
        else // ((*node)->right != NULL && (*node)->left != NULL) // case 4 // Não precisa de condição para o caso porque foi o que sobrou.
            (*node) = getMinAux(&((*node)->right));
        return (true);
    }
    ////////////////////////////////////////////////////////////////////////////
    if((*node)->element.key > x.key) {
        return (removeItem(&(*node)->left, x));
    }else if((*node)->element.key < x.key){
        return (removeItem(&(*node)->right, x));
    }
}


PtrTree maximum(PtrTree *node){
    return(maximum(&(*node)->right));
}

PtrTree maximumIterative(PtrTree *node){
    while((*node) != NULL){
        (*node)->right;
    }
    printf("%d", (*node)->element.key);
}

PtrTree minimum(PtrTree *node){
    return(minimum(&(*node)->left));
}

PtrTree minimumIterative(PtrTree *node){
    while((*node) != NULL){
        (*node)->left;
    }
    printf("%d", (*node)->element.key);
}




int main(){

    return 0;
}
