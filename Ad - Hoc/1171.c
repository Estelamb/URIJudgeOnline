#include <stdio.h>
#include <stdlib.h>

void Iniciar(int *Vetor, int N){
  int i;
  for(i=0; i<N; i++){
    Vetor[i] = 0;
  }
}

int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int main(int argc, char const *argv[]) {
  int N, i, j, cont=0;
  scanf("%d", &N);
  int VetorN[N];
  Iniciar(VetorN, N);

  for(i=0; i<N; i++){
    scanf("%d", &VetorN[i]);
  }

  qsort(VetorN, N, sizeof(int), comparador);

  for(i=0; i<N; i++){
    cont=1;
    for(j=i+1; j<N; j++){
      if(VetorN[i] == VetorN[j] && VetorN[i] != 0){
        cont++;
        VetorN[j] = 0;
      }
    }
    if(VetorN[i] != 0)
      printf("%d aparece %d vez(es)\n", VetorN[i], cont);
  }


  return 0;
}
