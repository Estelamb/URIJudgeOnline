#include <stdio.h>

int main(){
    int Testes, i, Coelhos=0, Ratos=0, Sapos=0, Quantia, Total;
    char Tipo, x = '%';
    double p,q,r;

    scanf("%d", &Testes);

    for(i = 0; i<Testes; i++){
        scanf("%d %c", &Quantia, &Tipo);
        if (Tipo == 'C') Coelhos = Coelhos + Quantia;
        else if (Tipo == 'R') Ratos = Ratos + Quantia;
        else if (Tipo == 'S') Sapos = Sapos + Quantia;
    }

    Total = Ratos + Coelhos + Sapos;
    p =(Coelhos*100.00)/Total;
    q =(Ratos*100.00)/Total;
    r =(Sapos*100.00)/Total;

    printf("Total: %d cobaias\n",Total);
    printf("Total de coelhos: %d\n",Coelhos);
    printf("Total de ratos: %d\n",Ratos);
    printf("Total de sapos: %d\n",Sapos);
    printf("Percentual de coelhos: %.2f %c\n",p,x);
    printf("Percentual de ratos: %.2f %c\n",q,x);
    printf("Percentual de sapos: %.2f %c\n",r,x);
    return 0;
}
