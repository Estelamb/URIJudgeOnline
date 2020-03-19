#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int E, D;
  scanf("%d %d", &E, &D);

  if(E > D)
    printf("Eu odeio a professora!\n");
  else if(E+3 <= D)
    printf("Muito bem! Apresenta antes do Natal!\n");
  else{
    printf("Parece o trabalho do meu filho!\n");

    if(E+2 < 24)
      printf("TCC Apresentado!\n");
    else
      printf("Fail! Entao eh nataaaaal!\n");
  }

  return 0;
}
