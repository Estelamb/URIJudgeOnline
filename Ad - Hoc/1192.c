#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char const *argv[]) {
  int N,i, conta=1;
  char sequencia[4];

  scanf("%d", &N);
  for(i=0; i<N; i++){
    scanf("%s", sequencia);

    if(sequencia[0] == sequencia[2])
      conta = (sequencia[0] - '0') * (sequencia[2] - '0');

    else if(isupper(sequencia[1]))
      conta = (sequencia[2] - '0') - (sequencia[0] - '0');
    else
      conta = (sequencia[0] - '0') + (sequencia[2] - '0');

    printf("%d\n", conta);
  }
  return 0;
}
