#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *numero;
  int n,i,numeros, j, cont, converter;

  scanf("%d", &n);
  for(i=0; i<n; i++){
    numero = (char *) malloc(10^100);
    scanf("%s", numero);
    numeros = strlen(numero);
    cont = 0;
    j = 0;

    while(j < numeros){
      converter = (numero[j] - '0');

      if(converter == 1)
        cont+=2;
      else if(converter == 2)
        cont+=5;
      else if(converter == 3)
        cont+=5;
      else if(converter == 4)
        cont+=4;
      else if(converter == 5)
        cont+=5;
      else if(converter == 6)
        cont+=6;
      else if(converter == 7)
        cont+=3;
      else if(converter == 8)
        cont+=7;
      else if(converter == 9)
        cont+=6;
      else if(converter == 0)
        cont+=6;

      j++;
    }

    free(numero);
    printf("%d leds\n", cont);
  }
  return 0;
}
