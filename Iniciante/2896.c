#include <stdio.h>

int main(){
  int i, T, N, K, Resultado=0;

  scanf("%d", &T);

  for(i=0; i<T; i++){
    scanf("%d %d", &N, &K);

    Resultado = (N%K) + (N/K);
    printf("%d\n", Resultado);
  }
  return 0;
}
