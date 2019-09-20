#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

typedef struct {
    int chave;
} Objeto;

typedef struct NoLista *PtrNoLista;

typedef struct NoLista {
    Objeto obj;
    PtrNoLista prox;
} NoLista;

typedef struct {
    PtrNoLista inicio;
    int tamanho;
} Lista;

void iniciaLista(Lista *list) {
    list->inicio = NULL;
    list->tamanho = 0;

}

bool estaVazia(Lista *list) {
    return (list->tamanho == 0);
}

void inserir(Lista *list, int x) {
    PtrNoLista novo;
    novo = (PtrNoLista) malloc(sizeof(NoLista));
    novo->obj.chave = x;
    printf("Inserindo o elemento: %d\n", x);
    if (estaVazia(list) || x < list->inicio->obj.chave) {
        novo->prox = list->inicio;
        list->inicio = novo;
        list->tamanho++;
    } else {
        PtrNoLista aux;
        aux = list->inicio;
        while (aux->prox != NULL && x > aux->prox->obj.chave) {
            aux = aux->prox;
        }
        novo->prox = aux->prox;
        list->tamanho++;
        aux->prox = novo;
    }
}

void imprimirLista(Lista *list) {
    if (estaVazia(list)) {
        printf("TA VAZIO LEK, VAI IMPRIMIR OQ?");
    }
        PtrNoLista aux;
        while (aux != NULL) {
            printf("%i\n", aux->obj.chave);
            aux = aux->prox;
        }
    }


bool pesquisa(Lista *list, int x) {
    if (estaVazia(list)) {
        return 0;
    } else {
        PtrNoLista aux = list->inicio;
        while (aux != NULL && x > aux->obj.chave) {
            aux = aux->prox;
        }
        if (aux == NULL || aux->obj.chave > x)
            return 0;
        return 1;
    }
}

/*void removeUltimo(Lista *list, Objeto *item) {
    PtrNoLista aux;
    aux->obj = list->tamanho;

}
*/
void removerPrimeiro(Lista *list, Objeto *item) {
    PtrNoLista aux = list->inicio->prox;
    free(item);
}


int remover(Lista *list, int key, Objeto *item) {
    if (estaVazia(list) && key < list->inicio->obj.chave) {
        return 0;
    } else {
        if (key == list->inicio->obj.chave) {
            removerPrimeiro(list, item);
            list->tamanho--;
        }
        PtrNoLista aux;
        while (aux->prox != NULL && key > aux->prox->obj.chave) {
            aux = aux->prox;
        }
        if (key == aux->prox->obj.chave) {
            *item = aux->prox->obj;
            PtrNoLista remove = aux->prox;
            aux->prox = aux->prox->prox;
            free(remove);
            list->tamanho--;
        } else {
            printf("Valor não encontrado\n");
        }
    }
}


int main(int argc, char **argv) {
    Lista list;
    iniciaLista(&list);

    srand(time(NULL));
    int contador = 10;
    while (contador != 0) {

        inserir(&list, rand()%10);
        imprimirLista(&list);
        estaVazia(&list);
        pesquisa(&list, rand()%10);
        contador--;
    }
    return 0;
}
