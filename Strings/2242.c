#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char risada[51];
  int i, cont = 0;

  scanf("%s", risada);

  char risadaInvertida[strlen(risada)];
  char aux[strlen(risada)];

  for(i=0; i<strlen(risada); i++){
    if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
      aux[cont] = risada[i];
      cont++;
    }
  }
  aux[cont] = '\0';
  cont = strlen(aux)-1;

  for(i=0; i<strlen(aux); i++){
    risadaInvertida[cont] = aux[i];
    cont--;
  }
  risadaInvertida[strlen(aux)] = '\0';

  if(strcmp(aux, risadaInvertida) == 0)
    printf("S\n");
  else
    printf("N\n");
  return 0;
}
