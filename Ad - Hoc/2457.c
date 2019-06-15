#include <stdio.h>
#include <string.h>

typedef struct{
  char palavra [1100];
} tipoPalavra;

unsigned short verificaLetra(tipoPalavra *palavra, unsigned short tam, char letra){
  unsigned short i, j;
  unsigned short contPalavras = 0;

  for(i=0; i<tam; i++){
    j = 0;

    while(palavra[i].palavra[j]){
      if(palavra[i].palavra[j] == letra){
        contPalavras++;
        break;
      }

      j++;
    }
  }

  return contPalavras;
}

int main(){
  char pesquisa, texto[1100], *aux;
  tipoPalavra palavra[1100];
  unsigned short i;

  scanf("%c", &pesquisa);
  scanf(" %[^\n]", texto);

  i = 0;
  aux = strtok(texto, " ");
  strcpy(palavra[i++].palavra, aux);

  do{
    aux = strtok('\0', " ");
    if(aux){
      strcpy(palavra[i++].palavra, aux);
    }

  } while(aux);


  printf("%.1lf\n", (verificaLetra(palavra, i, pesquisa)*100.0)/i);
  return 0;
}
