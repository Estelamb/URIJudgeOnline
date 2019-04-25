#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned short int i, j, n;
  n = 7;

  for(i=0; i<10; i++){
    for(j=n; j>(n-3); j--){
      printf("I=%d J=%d\n", i, j);
    }
    n+=2;
  }
  return 0;
}
