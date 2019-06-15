#include <stdio.h>
#include <math.h>

int main(void){
  double n;
  const double pi = acos(-1);

  while(scanf("%lf", &n) != EOF){
    printf("%.10lf\n", n * (sin(108*pi/180) / sin(63*pi/180)));
  }

  return 0;
}
