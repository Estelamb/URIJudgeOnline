#include <stdio.h>
#include <stdlib.h>

int main() {

    int codprod, quantprod;
    float preco;
    scanf("%d%d", &codprod, &quantprod);

    switch (codprod) {
    case 1: preco = quantprod * 4.00;
    printf("Total: R$ %.2f\n", preco);
    break;

    case 2: preco = quantprod * 4.50;
    printf("Total: R$ %.2f\n", preco);
    break;

    case 3: preco = quantprod * 5.00;
    printf("Total: R$ %.2f\n", preco);
    break;

    case 4: preco = quantprod * 2.00;
    printf("Total: R$ %.2f\n", preco);
    break;

    case 5: preco = quantprod * 1.50;
    printf("Total: R$ %.2f\n", preco);
    break;
    }
    return 0;
}
