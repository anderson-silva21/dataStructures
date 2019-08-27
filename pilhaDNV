#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int topo; //posição do elemento topo
    int capa;
    float *pElem;
}Pilha;

void criarpilha(Pilha *p, int c){
    p->topo = -1;
    p->capa = c;
    p->pElem = (float*)malloc(c* sizeof(float));
}

int estavazia(Pilha *p){
    if(p->topo == -1)
        return 1; //true
        else
            return 0; //false
}

int estacheia(Pilha *p){
    if(p->topo == p->capa -1)
        return 1; //true
        else
            return 0; //false
}

void empilhar(Pilha *p, float v){
    p->topo++;
    p->pElem[p->topo] = v;
}

float desempilhar(Pilha *p){
    float aux = p->pElem[p->topo];
    p->topo--;
    return aux;
}

float retornaTopo(Pilha *p){
    return p->pElem[p->topo];
}

int main(){
    Pilha minhapilha;
    int capacidade, op;
    float valor;
    printf("Insira a capacidade da pilha:\n");
    scanf("%d", &capacidade);
    criarpilha(&minhapilha, capacidade);
        while( 1 ){ //Loop infinito :)
            printf("\n 1- Empilhar (push)\n");
            printf("2- Desempilhar (pop)\n");
            printf("3- Mostrar o topo\n");
            printf("4- Sair\n");
            printf("\nOpção?...\n");
            scanf("%d", &op);
            switch (op){
                case 1: //Push
                    if(estacheia(&minhapilha)==1)
                        printf("\nPILHA CHEIA! \n");
                    else{
                        printf("\nVALOR?");
                        scanf("%f", &valor);
                        empilhar (&minhapilha, valor);
                    }
                    break;

                case 2: //pop
                    if(estavazia(&minhapilha) == 1)
                        printf("\nPILHA VAZIA!\n");
                    else{
                        valor = desempilhar(&minhapilha);
                        printf("\n%.1f DESEMPILHANDO!\n", valor);
                    }
                    break;

                case 3: //Mostrar topo
                    if(estavazia(&minhapilha) == 1)
                        printf("\nPILHA VAZIA!\n");
                    else{
                        valor = retornaTopo(&minhapilha);
                        printf("\nTOPO: %.1f\n", valor);
                    }
                    break;

                case 4: //saida
                    exit(0);

                default: printf("\nOPÇÃO INVALIDA!\n");
                    }
                }
            }
