#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int D, I, X, F;
  scanf("%d %d %d %d", &D, &I, &X, &F);
  int Aux;
  Aux = D+F;
  D++;

  while(D <= Aux){
    if(D%2 == 0)
      I+=X;
    else
      I-=X;

    D++;
  }

  printf("%d\n", I);
  return 0;
}
