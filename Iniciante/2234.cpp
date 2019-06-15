#include <stdio.h>

int main(void){
  int H, P;
  double media;

  scanf("%d %d", &H, &P);
  media = (double)H/P;
  printf("%.2lf\n", media);
  return 0;
}
