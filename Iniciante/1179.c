#include <stdio.h>

int main(){
  int vetorPar[5], vetorImpar[5];
  int contPar = 0, contImpar = 0;
  int num, i, j;

  for(i=0; i<15; i++){
    scanf("%d", &num);

    if(num%2 == 0){
      vetorPar[contPar] = num;
      contPar++;

      if(contPar == 5){
        for(j=0; j<5; j++) printf("par[%d] = %d\n",j, vetorPar[j]);
        contPar = 0;
      }
    }

    else{
      vetorImpar[contImpar] = num;
      contImpar++;

      if(contImpar == 5){
        for(j=0; j<5; j++) printf("impar[%d] = %d\n", j, vetorImpar[j]);
        contImpar = 0;
      }
    }

    if(i == 14){
      for(j=0; j<contImpar; j++) printf("impar[%d] = %d\n", j, vetorImpar[j]);

      for(j=0; j<contPar; j++) printf("par[%d] = %d\n", j, vetorPar[j]);
    }
  }
  return 0;
}
