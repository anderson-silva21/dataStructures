//Aula dia 04.10.2019
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

PtrTree node;

bool findItem(PtrTree *node, int key){
    if(*node == NULL)
        return (0);
    if((*node)->element.key == key)
        return(1);
    if( key < (*node)->element.key){
        //(*node)->left;
        return(findItem((&(*node)->left), key));
    } else {
        return(findItem((&(*node)->right), key));
       // (*node)->right;
    }
}

void preOrder(PtrTree *node){
    if(*node == NULL) return;
    printf("%i", (*node)->element.key);
    preOrder(&(*node)->left);
    preOrder(&(*node)->right);
}

void posOrder(PtrTree *node){
    if(*node == NULL) return;
    posOrder(&(*node)->left);
    posOrder(&(*node)->right);
    printf("%i", (*node)->element.key);
}

void inOrder(PtrTree *node){
    if(*node == NULL) return;
    inOrder(&(*node)->left);
    printf("%i", (*node)->element.key);
    inOrder(&(*node)->right);
}

PtrTree maximumIterative(PtrTree *node){
    while((*node) != NULL){
        (*node)->right;
    }
    printf("%i", (*node)->element.key);
}

PtrTree minimumIterative(PtrTree *node){
    while((*node) != NULL){
        (*node)->left;
    }
    printf("%i", (*node)->element.key);
}

PtrTree maximum(PtrTree *node){
    return(maximum(&(*node)->right));
}

PtrTree minimum(PtrTree *node){
    return(minimum(&(*node)->left));
}

PtrTree getMinAux(PtrTree *node){
    return ((*node)->right);
}

bool removeItem(PtrTree *node, int key){
    if(*node == NULL)
        return false;
    PtrTree *aux;
    if((*node)->element.key == key){
        //caso um
        if(((*node)->left == NULL) && ((*node)->right != NULL)){
            (*node) = (*node)->right;
        } else if(((*node)->right == NULL) && ((*node)->left != NULL)){
            (*node) = (*node)->left;
        } else if(((*node)->left == NULL) && ((*node)->right == NULL)){
            (*node) = (*node)->left;
        } else {
            (*node) = getMinAux(&((*node)->right));
        }        
        return true;
    }
    if((*node)->element.key > key){
        return(removeItem((&(*node)->left),key));
    } else {
        return(removeItem((&(*node)->right),key));
    }
    return true;
    
}


int main(){
    
    int key=9;
    Object *ret;
    
    findItem(&node, key);
    preOrder(&node);
    posOrder(&node);
    inOrder(&node);
    maximumIterative(&node);
    minimumIterative(&node);
    maximum(&node);
    minimum(&node);
    int keyr=8;
    removeItem(&node,keyr);
}
