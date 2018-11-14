#include <stdio.h>
 
int main(){
    int n[9],i,soma=0,rena;
    for(i=0;i<9;i++){
        scanf("%d",&n[i]);
        soma = soma + n[i];
    }
    rena = soma % 9;
    if (rena == 0)
        printf("Rudolph\n");
    if (rena == 1)
        printf("Dasher\n");
    if (rena == 2)
        printf("Dancer\n");
    if (rena == 3)
        printf("Prancer\n");
    if (rena == 4)
        printf("Vixen\n");
    if (rena == 5)
        printf("Comet\n");
    if (rena == 6)
        printf("Cupid\n");
    if (rena == 7)
        printf("Donner\n");
    if (rena == 8)
        printf("Blitzen\n");
}
