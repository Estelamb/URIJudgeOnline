#include <stdio.h>

int main() {
  int M, N, Soma=0;

  while(1){
    Soma = 0;
    scanf("%d %d", &M, &N);

    if(M <= 0 || N <= 0){
      return 0;
    } else if(M >= N){
      while(M >= N){
        printf("%d ", N);
        Soma += N;
        N++;
      }
      printf("Sum=%d\n", Soma);
    }else if(N >= M){
      while(N >= M){
        printf("%d ", M);
        Soma += M;
        M++;
      }
      printf("Sum=%d\n", Soma);
    }
  }
  return 0;
}
