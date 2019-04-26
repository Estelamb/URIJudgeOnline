#include <stdio.h>
#include <stdlib.h>

int main() {
  double X, media, soma=0;
  int cont=0;

  while(scanf("%lf", &X) != EOF){
    if(X < 0 || X > 10)
      printf("nota invalida\n");
    else if(X == 2)
      break;
    else{
      cont++;
      soma+= X;
    }

    if(cont == 2){
      media = soma/2;
      printf("media = %.2lf\n", media);
      soma = 0;
      cont = 0;

      while(1>0){
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%lf", &X);

        if(X == 2 || X == 1)
          break;
      }

      if(X == 2)
        break;
    }
  }
  return 0;
}
