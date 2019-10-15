#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int chave;
} Objeto;

typedef struct NoFila *PtrNoFila;

typedef struct NoFila {
    Objeto obj;
    PtrNoFila proximo;
} NoFila;

typedef struct {
    PtrNoFila inicio;
    PtrNoFila fim;
    int tamanho;
} FilaDinamica;

void iniciaFila(FilaDinamica *fila);
void imprimeFila(FilaDinamica *fila);
void enfileira(Objeto x, FilaDinamica *fila);
//void desenfileira(FilaDinamica *fila, Objeto *x);
Objeto desenfileira(FilaDinamica *fila);
int estaVazia(FilaDinamica *fila);
int tamanhoFila(FilaDinamica *fila);
Objeto inicioFila(FilaDinamica *fila);
Objeto fimFila(FilaDinamica *fila);

//========================================================================
//========================================================================

void iniciaFila(FilaDinamica *fila) {
    fila->inicio = NULL;
    fila->fim = NULL;
    fila->tamanho = 0;
}

//========================================================================
//========================================================================

void imprimeFila(FilaDinamica *fila) {
    PtrNoFila auxiliar;
    printf("fila: ");
    auxiliar = fila->inicio;
    while (auxiliar != NULL) {
        printf("%i", auxiliar->obj.chave);
        auxiliar = auxiliar->proximo;
    }
}

//========================================================================
//========================================================================

void enfileira(Objeto x, FilaDinamica *fila) {
    PtrNoFila aux = NULL;
    aux = (PtrNoFila) malloc(sizeof (NoFila));
    aux->obj = x;
    aux->proximo = NULL;
    if (estaVazia) {//primeira inserçao
        fila->inicio = aux;
        fila->fim = aux;
    } else {
        fila->fim->proximo = aux;
        fila->fim = fila->fim->proximo;
    }
    fila->tamanho++;
}

//========================================================================
//========================================================================

//void desenfileira(FilaDinamica *fila, Objeto *x){


//========================================================================
//========================================================================

Objeto desenfileira(FilaDinamica *fila) {
    PtrNoFila auxi = NULL;

    if (estaVazia) {
        printf("esta vazia princeso");
    }
    auxi = fila->inicio;
    fila->inicio = fila->inicio->proximo;
    Objeto ret = auxi->obj;
    free(auxi);
    fila->tamanho--;
    return ret;

}


//========================================================================
//========================================================================

int estaVazia(FilaDinamica *fila) {
    fila->inicio = NULL;
    return 1;
}

//========================================================================
//========================================================================

int tamanhoFila(FilaDinamica *fila) {
    return fila->tamanho;
}

//========================================================================
//========================================================================

Objeto inicioFila(FilaDinamica *fila) {
    return (fila->inicio->obj);
}

//========================================================================
//========================================================================

Objeto fimFila(FilaDinamica *fila) {
    return (fila->fim->obj);
}

//========================================================================
//========================================================================

int main(int argc, char** argv) {

    FilaDinamica fila;
    
    iniciaFila(&fila);
    imprimeFila(&fila);
    enfileira(x, &fila);
    desenfileira(&fila);
    estaVazia(&fila);
    tamanhoFila(&fila);
    inicioFila(&fila);
    fimFila(&fila);

    return (EXIT_SUCCESS);
}
