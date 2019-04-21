#include <stdio.h>
#include <stdlib.h>

int main() {
    int inicio, fim, cont;

    scanf("%d %d", &inicio, &fim);

    cont = 24 - inicio + fim;

    if(cont >24){
        printf("O JOGO DUROU %d HORA(S)\n", cont-24);
    } else {
        printf("O JOGO DUROU %d HORA(S)\n", cont);
    }
    return 0;
}
