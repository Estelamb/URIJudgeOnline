#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  long long int N, I, i, j, k, cont=0;

  while(scanf("%lld %lld", &N, &I) != EOF){
    cont = 0;
    
    for(k=0; k<N; k++){
      scanf("%lld %lld", &i, &j);

      if(i == I)
        if(j == 0)
          cont++;
    }

    printf("%lld\n", cont);
  }
  return 0;
}
