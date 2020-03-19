#include <stdio.h>
#include <stdlib.h>

typedef struct No* Ponteiro;
typedef struct No{
    int valor;
    Ponteiro prox;
}No;

typedef struct{
    Ponteiro topo;
    int tam;
}Pilha;

void inicializa(Pilha *pilha){
    pilha->topo = (Ponteiro) malloc(sizeof(No)); 
    pilha->topo->prox = NULL; 
    pilha->tam=0;
}

void empilha(Pilha *pilha, int num){
    Ponteiro aux;
    aux = (Ponteiro) malloc(sizeof(No)); 
    pilha->topo->valor = num; 
    aux->prox = pilha->topo; 
    pilha->topo = aux; 
    pilha->tam++;
}

int desempilha (Pilha *pilha){
    Ponteiro aux;
    if(pilha->tam == 0)
        return 0;
    aux = pilha->topo->prox; 
    pilha->topo->prox = aux->prox; 
    free(aux); 
    pilha->tam--;
    return 1;
}

int main(){
Pilha pilha;
int i, n, b, j, flag, fl;


while(1){ 
    scanf("%d", &n);
    if(n == 0){ 
        break;
    }
    flag = 0; 
    while(1){ 
        inicializa(&pilha);
        empilha(&pilha, 1); 
        j=2; 
        for(i=0; i<n;i++){
            scanf("%d", &b);
            if(b == 0){
                flag=1;
                break;
            }

            while((pilha.tam == 0) || ((pilha.topo->prox->valor != b) && (j != n+1))){
                empilha(&pilha, j);
                j++;
            }
            if((pilha.topo->prox->valor != b) && (j==n+1)) 
                continue;
            else 
                desempilha(&pilha);
        }
        if((i==n) && (pilha.tam == 0)) 
            printf("Yes\n");
        else if (flag == 0) 
            printf("No\n");
        if(flag==1){
            printf("\n");
            break;
        }
    }
}
return 0;
}
