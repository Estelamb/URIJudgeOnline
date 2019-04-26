#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char sequencia[51], contR, contW;
  int n, tamanho, i;

  while(scanf("%s", sequencia) != EOF){
    scanf("%d", &n);
    contR = 0;
    contW = 0;
    i = 0;

    tamanho = strlen(sequencia);
    while(i < tamanho){
      if(sequencia[i] == 'R')
        contR++;
      else
        contW++;

      i++;
    }

    if(contR > contW)
      printf("%d\n", contR);
    else
      printf("%d\n", contW);
    }

  return 0;
}
