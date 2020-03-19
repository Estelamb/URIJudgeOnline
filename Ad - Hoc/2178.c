#include <stdio.h>
#include <stdlib.h>


int main() {
    int A, P, qtd, i, j, maior = 0, qtd_voltas = 0;
    scanf("%d %d", &A, &P);
    for (j = 0; j < A; j++) {
        scanf("%d", &qtd);
        int *vetor = (int *) malloc(sizeof(int) * qtd);
        qtd_voltas = 1;
        for (i = 0; i < qtd; i++) {
            scanf("%d", &vetor[i]);
            if (i != 0 && vetor[i - 1] > vetor[i]) {
                qtd_voltas++;

            }
            if (qtd - 1 == i && vetor[i] == 0)
                qtd_voltas--;

        }

        if (j == 0)
            maior = qtd_voltas;
        else if (maior < qtd_voltas)
            maior = qtd_voltas;
        free(vetor);
    }

    printf("%d\n", maior);
    return 0;
}
