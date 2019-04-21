#include <stdio.h>
#include <stdlib.h>

int main() {
    int inicio,mininicio, fim, minfim, cont, cont1;

    scanf("%d %d %d %d", &inicio, &mininicio, &fim, &minfim);

    cont = fim - inicio;

    if(cont<0){
        cont = 24 + (fim - inicio);
    }

    cont1 = minfim - mininicio;

    if(cont1 < 0){
        cont1 = 60 + (minfim-mininicio);
        cont--;
    }

    if(inicio==fim && mininicio==minfim){
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    } else{
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", cont, cont1);
    }
    return 0;
}
