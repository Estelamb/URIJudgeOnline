#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  double X, N[100];
  int i;

  scanf("%lf", &X);

  for(i=0; i<100; i++){
    if(i == 0)
      N[i] = X;
    else
      N[i] = N[i-1]/2.0;

    printf("N[%d] = %.4lf\n", i, N[i]);
  }
  return 0;
}
