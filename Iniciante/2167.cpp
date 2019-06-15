#include <stdio.h>

int main(void) {
  int N, R, RAnterior, i, flag = 0;
  scanf("%d", &N);

  int quedas = 0;

  for(i=0; i<N; i++){
    scanf("%d", &R);

    if(i == 0){
      RAnterior = R;
      quedas = 0;
    } else{
      if(RAnterior > R && flag == 0){
        flag = 1;
        quedas = i+1;
      }
    }

    RAnterior = R;
  }

  printf("%d\n", quedas);
  return 0;
}
