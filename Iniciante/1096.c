#include <stdio.h>
#include <stdlib.h>

int main() {
  unsigned short int i=1, j=7, cont=0, k;

  while(i < 10){
    j = 7;
    while(j > 4){
      printf("I=%d J=%d\n",i, j);
      j--;
    }
    i += 2;
  }
  return 0;
}
