#include <iostream>

int main(void) {
  int N, A, B, i;
  unsigned short contA, contB;


  while(scanf("%d", &N) != 0){
    if(N == 0)
      break;

    contA = 0;
    contB = 0;

    for(i=0; i<N; i++){
      scanf("%d %d", &A, &B);

      if(A > B)
        contA++;
      else if(A < B)
        contB++;
    }

    printf("%hu %hu\n", contA, contB);
  }
  return 0;
}
