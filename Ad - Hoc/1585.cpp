#include <iostream>

using namespace std;

int main(void) {
  unsigned short N, x, y, i;

  scanf("%hu", &N);

  for(i=0; i<N; i++){
    scanf("%hu %hu", &x, &y);

    printf("%hu cm2\n", (x*y)/2);
  }
  return 0;
}
