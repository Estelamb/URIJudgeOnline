#include <stdio.h>
#include <stdlib.h>

int main() {
    double temp, soma, a, b, c;
    double trian[3];
    int i,j;

    for(i=0; i<3; i++){
        scanf("%lf", &trian[i]);
    }

    for(i=0;i<3;i++){
        for(j=i;j<3;j++){
            if (trian[i] < trian[j]){
                temp = trian[i];
                trian[i] = trian[j];
                trian[j] = temp;
            }
        }
    }

    soma = trian[1] + trian[2];
    if (trian[0] >= soma){
        printf("NAO FORMA TRIANGULO\n");
    } else {
        a = trian[0] * trian[0];
        b = trian[1] * trian[1];
        c = trian[2] * trian[2];
        soma = b + c;

        if (a == soma){
            printf("TRIANGULO RETANGULO\n");
        } else if (a > soma){
            printf("TRIANGULO OBTUSANGULO\n");
        } else if (a < soma){
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (a == b && b == c){
            printf("TRIANGULO EQUILATERO\n");
        } else if ((a == b && b != c && a != c) || (a != b && b != c && a == c ) || (a != b && b == c && a != c)){
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
