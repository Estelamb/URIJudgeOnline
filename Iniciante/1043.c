#include <stdio.h>
#include <stdlib.h>

int main() {
    double a,b,c,soma,area;

    scanf("%lf %lf %lf", &a, &b, &c);

    if(a < b + c && b < a + c && c < a + b){
        soma = a+b+c;
        printf("Perimetro = %.1lf\n", soma);
    } else {
        area = ((a+b)*c)/2;
        printf("Area = %.1lf\n", area);
    }
    return 0;
}
