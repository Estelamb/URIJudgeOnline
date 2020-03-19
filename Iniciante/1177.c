#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int T, i, j=0;
  scanf("%d", &T);
  int N[1000];

  for(i=0; i<1000; i++){
    N[i] = j;
    printf("N[%d] = %d\n", i, j);
    j++;

    if(j == T)
      j=0;
  }
  return 0;
}
