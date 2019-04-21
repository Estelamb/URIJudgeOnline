#include <stdio.h>
#include <stdlib.h>

int main() {

    char vendedor[10];
    double salario, montante, total;
    scanf("%s", &vendedor);
    scanf("%lf", &salario);
    scanf("%lf", &montante);
    total = salario + (montante*0.15);
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}
