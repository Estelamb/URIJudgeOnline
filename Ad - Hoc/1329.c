#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int N, X, contMary, contJohn, i;

  while(scanf("%d", &N) != 0){
    if(N == 0)
      break;
      
    contMary = 0;
    contJohn = 0;

    for(i=0; i<N; i++){
      scanf("%d", &X);

      if(X == 0)
        contMary++;
      else
        contJohn++;
    }

    printf("Mary won %d times and John won %d times\n", contMary, contJohn);
  }
  return 0;
}
