#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int N, K, i, j;
  char S[30], temp[30], saida[30];

  scanf("%d", &N);
  for(i=0; i<N; i++){
    scanf("%d", &K);

    for(j=0; j<K; j++){
      scanf("%s", S);

      if(j == 0){
          strcpy(temp, S);
          strcpy(saida, S);
      }

      if(strcmp(S, temp) != 0)
        strcpy(saida, "ingles");
    }

    printf("%s\n", saida);
  }

  return 0;
}
