#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  char nome[150];
  unsigned short medalhasOuro, medalhasPrata, medalhasBronze;
}paises;

void Ordena(paises pais[], unsigned short tam){
  short i = 1, j;
  paises pivo;

  while(i < tam){
    j = i - 1;
    pivo = pais[i];

    while(j >= 0 && pais[j].medalhasOuro < pivo.medalhasOuro){
      pais[j+1] = pais[j];
      j--;
    }

    pais[j+1] = pivo;
    i++;
  }
}

void OrdenaOuro(paises pais[], unsigned short tam){
  short i = 1, j;
  paises pivo;

  while(i < tam){
    j = i - 1;
    pivo = pais[i];

    while(j >= 0 && strcmp(pais[j].nome, pivo.nome) > 0){
      pais[j+1] = pais[j];
      j--;
    }

    pais[j+1] = pivo;
    i++;
  }
}

void OrdenaPrata(paises pais[], unsigned short tam){
  short i = 1, j;
  paises pivo;

  while(i < tam){
    j = i - 1;
    pivo = pais[i];

    while(j >= 0 && pais[j].medalhasPrata < pivo.medalhasPrata){
      pais[j+1] = pais[j];
      j--;
    }

    pais[j+1] = pivo;
    i++;
  }
}

void OrdenaBronze(paises pais[], unsigned short tam){
  short i = 1, j;
  paises pivo;

  while(i < tam){
    j = i - 1;
    pivo = pais[i];

    while(j >= 0 && pais[j].medalhasBronze < pivo.medalhasBronze){
      pais[j+1] = pais[j];
      j--;
    }

    pais[j+1] = pivo;
    i++;
  }
}

int main(){
  int N;
  scanf("%d", &N);
  int i;

  paises pais[N+1];

  for(i=0; i<N; i++){
    scanf("%s %hu %hu %hu", pais[i].nome, &pais[i].medalhasOuro, &pais[i].medalhasPrata, &pais[i].medalhasBronze);
  }

  OrdenaOuro(pais, N);
  OrdenaBronze(pais, N);
  OrdenaPrata(pais, N);
  Ordena(pais, N);

  for(i=0; i<N; i++){
    printf("%s %hu %hu %hu\n", pais[i].nome, pais[i].medalhasOuro, pais[i].medalhasPrata, pais[i].medalhasBronze);
  }

  return 0;
}
