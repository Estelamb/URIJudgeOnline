#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {
  int n, i;

  while(scanf("%d", &n) != 0){
    if(n == 0)
      break;

    for(i=1; i<=n; i++){
      if(i == n)
      printf("%d\n", i);
      else
      printf("%d ", i);
    }
  }
  return 0;
}
