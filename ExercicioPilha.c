#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAXTAM 100
////////////////////////////////////////////////////////////////////////////////
typedef struct {
    int chave;
} Objeto;

typedef struct NoPilha *PtrNoPilha;

typedef struct NoPilha{
    Objeto obj;
    PtrNoPilha proximo;
} NoPilha;

typedef struct {
    PtrNoPilha topo;
    int tamanho;
} PilhaDinamica;

void iniciaPilha(PilhaDinamica *p){
    p->topo = NULL;
    p->tamanho = 0;
}

bool estaVazia(PilhaDinamica *p){
    return(p->tamanho == 0);
}

void empilha(Objeto obj, PilhaDinamica *p){
    PtrNoPilha  aux = NULL;
    aux = (NoPilha*)malloc(sizeof(PtrNoPilha));
    aux->obj = obj;
    aux->proximo = p->topo;
    p->topo = aux;
    p->tamanho++;
}

void desempilha(PilhaDinamica *p, Objeto *obj, FILE *arqs){
    if(!estaVazia(p)){
        PtrNoPilha aux = NULL;
        aux = p->topo;
        *obj = p->topo->obj;
        p->topo = p->topo->proximo;
        p->tamanho--;
        fprintf(arqs, "%p", aux);
        free(aux);
    }else{
        printf("DEU ERRO IRMAO\n");
    }
}

int tamanhoPilha(PilhaDinamica *p){
    return(p->tamanho);
}

void topo(PilhaDinamica *p, Objeto *obj){
    if(!estaVazia(p)){
    printf("topo = %i\n", p->topo->obj.chave);
    }else{
        printf("NAO TEM NADA LEK\n");
    }
}
void imprimePilha(PilhaDinamica *p){
    if(estaVazia(p)){
        printf("NAO TEM NADA LEK\n");
    }else{
        printf("pilha: ");
        while(p != NULL){
            printf("%i", p->topo->obj.chave);
            p->topo = p->topo-1;
        }
    }
}

////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////
typedef struct {
    int Item[MAXTAM];
    int Topo;
} TPilha;

void TPilha_Inicia(TPilha *p) {
    p->Topo = -1;
}

int TPilha_Vazia(TPilha *p) {
    if (p->Topo == -1) {
        return 1;
    } else {
        return 0;
    }
}

int TPilha_Cheia(TPilha *p) {
    if (p->Topo == MAXTAM - 1) {
        return 1;
    } else {
        return 0;
    }
}

void TPilha_Insere(TPilha *p, int x) {
    if (TPilha_Cheia(p) == 1) {
        printf("\nERRO: Pilha cheia");
    } else {
        p->Topo++;
        p->Item[p->Topo] = x;
    }
}

int TPilha_Desempilha(TPilha *p) {
    int aux;
    if (TPilha_Vazia(p) == 1) {
        printf("\nERRO: Pilha vazia");
    } else {
        aux = p->Item[p->Topo];
        p->Topo--;
        return aux;
    }
}
////////////////////////////////////////////////////////////////////////////////
int PilhaEstatica(FILE *arq) {
    TPilha *x = (TPilha *) malloc(sizeof (TPilha));
    TPilha_Inicia(x);
    FILE *arqs = NULL;
    arqs = fopen("saida.txt", "w");
    int p;
    int contador = 0;
    while (feof(arq) == 0) {
        fscanf(arq, "%d", &p);
        while (p > 0) {
            int k = p % 2;
            TPilha_Insere(x, k);
            p = p / 2;
            contador++;
        }
        while (contador != 0) {
            int k = TPilha_Desempilha(x);
            fprintf(arqs, "%d", k);
            contador--;
        }
    }
    fclose(arq);
    fclose(arqs);
}
////////////////////////////////////////////////////////////////////////////////
int PilhaDInamica(FILE *arq) {
    FILE *arqs = NULL;
    arqs = fopen("saida.txt", "w");
    Objeto obj;
    PilhaDinamica *g = (PilhaDinamica *) malloc(sizeof (PilhaDinamica));
    iniciaPilha(g);
    int p, k;
    int contador;
    while (feof(arq) == 0){
        fscanf(arq,"%d", &p);
        while (p > 0) {
            k = p % 2;
            obj.chave = k;
            empilha(obj, g);
            p = p / 2;
            contador++;
        }
        while (contador != 0){
            desempilha(g, &obj, arqs);
            contador--;
        }
    }
    fclose(arq);
    fclose(arqs);
}
////////////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv) {
    FILE *arq = NULL;
    arq = fopen("entrada.txt'", "r");
    char x;
    fscanf(arq, "%c", &x);
    if (x == 'd')
        PilhaDInamica(arq);
    if (x == 'e')
        PilhaEstatica(arq);
    return 0;
}
