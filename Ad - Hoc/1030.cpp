#include <stdio.h>

unsigned short recorrencia(int n, int k){
  unsigned short retorno = 0, i;

  for(i=2; i<= n; i++){
    retorno = (retorno + k) % i;
  }

  return retorno;
}

int main(void) {
  int NC, n, k, i;
  scanf("%d", &NC);

  for(i=0; i<NC; i++){
    scanf("%d %d", &n, &k);
    printf("Case %d: %hu\n", i+1, recorrencia(n, k) + 1);
  }
  return 0;
}
