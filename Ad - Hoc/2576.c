#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int C, S, A, B, i;
  int C1, C2;
  int A1=0, B1=0;
  int setas=0;

  scanf("%d %d %d %d", &C, &S, &A, &B);

  for(i=0; i<S; i++){
    scanf("%d %d", &C1, &C2);
    A1 += C1;
    B1 += C2;
  }

  A1 = A1 - A;
  B1 = B1 - B;

  if(A1 > B1){
    setas = (A1 - B1)/2;
    printf("Bibika: %d\n", setas);
  } else if(A1 < B1){
    setas = (B1 - A1)/2;
    printf("Bibi: %d\n", setas);
  } else if(A1 == B1){
    printf("Bibibibika\n");
  }


  return 0;
}
