#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int chave;
} Item;

typedef struct NoArvoreAVL *PointeiroArvoreAVL;

typedef struct NoArvoreAVL {
    Item elemento;
    PointeiroArvoreAVL direita;
    PointeiroArvoreAVL esquerda;
    int altura;
} NodeNoArvoreAVLTree;

void iniciaArvoreAVL(PointeiroArvoreAVL *node){
    *node = malloc (sizeof (PointeiroArvoreAVL));
    (*node)->esquerda = NULL;
    (*node)->direita = NULL;
}
bool estaVaziaArvoreAVL(PointeiroArvoreAVL *node){
    return(*node == NULL);
}

void preOrdem(PointeiroArvoreAVL *node){
    if(*node = NULL) return;
    printf("%d", (*node)->elemento.chave);
    preOrdem(&(*node)->esquerda);
    preOrdem(&(*node)->direita);
}

void posOrdem(PointeiroArvoreAVL *node){
    if(*node == NULL) return;
    posOrdem(&(*node)->esquerda);
    posOrdem(&(*node)->direita);
    printf("%d", (*node)->elemento.chave);
}

void emOrdem(PointeiroArvoreAVL *node){
    if(*node ==  NULL) return;
    emOrdem(&(*node)->esquerda);
    printf("%d", (*node)->elemento.chave);
    emOrdem(&(*node)->direita);
}

int alturaArvoreAVL(PointeiroArvoreAVL *node){
    if (node == NULL)
        return 0;
    int hesq = alturaArvoreAVL(&(*node)->esquerda);
    int hdir = alturaArvoreAVL(&(*node)->direita);
    return  hesq > hdir ? hesq + 1 : hdir + 1;
}

int atualizaAlturaArvoreAVL(PointeiroArvoreAVL esquerda, PointeiroArvoreAVL direita){

}

bool pesquisaArvoreAVL(PointeiroArvoreAVL *node, int chave){
    if(*node == NULL)
        return (false);
    if((*node)->elemento.chave == chave)
        return (true);
    if(chave < (*node)->elemento.chave) {
        (*node)->esquerda;
    }else{
        (*node)->direita;
    }
}

void destruirArvoreAVL(PointeiroArvoreAVL *node){

}

void aplicarRotacoes(PointeiroArvoreAVL *node){

}

void rotacaoSimplesEsquerda(PointeiroArvoreAVL *node){
    PointeiroArvoreAVL *tmp = &(*node)->direita;
    (*node)->direita = (*tmp)->esquerda;
    (*tmp)->esquerda = (*node);
}

void rotacaoSimplesDireita(PointeiroArvoreAVL *node){
    PointeiroArvoreAVL *tmp = &(*node)->esquerda;
    (*node)->esquerda = (*tmp)->direita;
    (*tmp)->direita = (*node);
}

void rotacaoDuplaEsquerda(PointeiroArvoreAVL *node){

}

void rotacaoDuplaDireita(PointeiroArvoreAVL *node){

}

bool inserirArvoreAVL(PointeiroArvoreAVL *node, Item x){

}

void imprimeArvoreAVLNivel(PointeiroArvoreAVL *node){

}

PointeiroArvoreAVL getMaxAux (PointeiroArvoreAVL *node){

}

/*
 Remover um nó não afeta o balanceamento de suas subárvores
 Método: substituir o nó pelo maior filho da sub-árvore direita
 */
bool removeAVL(PointeiroArvoreAVL *node, int chave){
 if(node == NULL)
     return (false);
 if ((*node)->elemento.chave == chave) {
     if((*node)->esquerda == NULL) {
         *node = (*node)->direita;
     }
     if((*node)->direita == NULL) {
         *node = (*node)->esquerda;
     }
     if((*node)->direita != NULL && (*node)->esquerda != NULL){
         PointeiroArvoreAVL tmp;
         tmp =
     }
 }
}

int main(){

    return 0;
}
