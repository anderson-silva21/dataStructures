#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXTAM 5

typedef struct{
    int key;
}objeto;

typedef struct{
    int comeco;
    int fim;
    objeto array[MAXTAM];
    int tamanho;
}FilaEstatica;

typedef struct NoFila *Ponteiro;

typedef struct NoFila{
    objeto item;
    Ponteiro proximo;
} NoFila;

bool estaCheia(FilaEstatica *p){
    return(p->tamanho == MAXTAM);
}

bool estaVazia(FilaEstatica *p){
    return(p->tamanho == 0);
}

int incrementarIndice(int i){
    i++;
    if(i == MAXTAM)
        i = 0;
    return i;
}

void enqueue(objeto X, FilaEstatica *p){
if(!estaCheia(p)){
    p->fim = incrementarIndice(p->fim);
    p->array[p->fim] = X;
    p->tamanho++;
}else{
    printf("???????????????????????????????????????\n");
}
}

objeto dequeue(FilaEstatica *p){
    objeto aux;
    if(!estaVazia(p)){
        aux = p->array[p->comeco];
        p->comeco = incrementarIndice((p->comeco));
        p->tamanho = p->tamanho - 1;
        return(aux);
    }else {
        printf("Entropia do Universo tende ao máximo\n");
    }
}

void printaae(FilaEstatica *p) {
    for (int i = p->comeco; i != p->fim; i++) {
        if (i == MAXTAM)
            i = 0;

        printf("%i", p->array[i].key);
    }
}
int main() {

FilaEstatica *p = NULL;
objeto aux;
aux.key = 4;
enqueue(aux, p);
aux.key = 1;
enqueue(aux, p);
aux.key = 3;
enqueue(aux, p);
dequeue(p);
aux.key = 8;
enqueue(aux, p);
dequeue(p);

printaae(p);

    return 0;
}
