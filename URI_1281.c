#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct produtos{
    double preco;
    char nome[51];
}prod;

typedef struct prodcompra{
    int quant;
    char prod[51];
}compra;

int main(){
    int n,m,i,j,k,p;
    double soma;
    scanf("%d", &n);


    for(i=0; i<n; i++){
        soma = 0;
        scanf("%d", &m);
        prod pr[m];

        for(j=0; j<m; j++){
            scanf("%s", pr[j].nome);
            scanf("%lf", &pr[j].preco);
        }

        scanf("%d", &p);
        compra c[p];

        for(k=0; k<p; k++){
            scanf("%s", c[k].prod);
            scanf("%d", &c[k].quant);
        }

        for(k=0; k<m; k++){
            for(j=0; j<p; j++){
                if(strcmp(c[j].prod, pr[k].nome) == 0){
                    soma = soma + (pr[k].preco * c[j].quant);
                }
            }
        }
        printf("R$ %0.2lf\n", soma);
    }
}
