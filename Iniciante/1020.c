#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int n, dias, meses, anos;

    scanf("%d", &n);
    anos = n/365;
    meses = (n - (anos*365))/30;
    dias = n - (anos*365 + meses*30);

    printf("%d ano(s)\n", anos);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
}
