#include <stdio.h>

int main() {
    double N, D, V, T;
    double N1, D1, V1, T1;
    scanf("%lf %lf %lf", &N, &D, &V);
    scanf("%lf %lf %lf", &N1, &D1, &V1);

    T = D/V;
    T1 = D1/V1;

    if(T < T1)
      printf("%.0lf\n", N);
    else
      printf("%.0lf\n", N1);
    return 0;
}
