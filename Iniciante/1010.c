#include <stdio.h>
#include <stdlib.h>

int main() {

    int peca1, peca2, codpeca1, codpeca2;
    double precopeca1, precopeca2, total;
    scanf("%d %d %lf", &peca1, &codpeca1, &precopeca1);
    scanf("%d %d %lf", &peca2, &codpeca2, &precopeca2);
    total = (precopeca1*codpeca1) + (precopeca2*codpeca2);
    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
