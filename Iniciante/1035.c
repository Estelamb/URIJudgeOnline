#include <stdio.h>
#include <stdlib.h>

int main() {
    int a,b,c,d,soma1,soma2;

    scanf("%d %d %d %d", &a, &b, &c, &d);

    soma1 = a+ b;
    soma2 = c + d;

    if(b > c && d > a && soma2 > soma1 && c > 0 && d > 0 && a%2 == 0){
        printf("Valores aceitos\n");
    } else {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
