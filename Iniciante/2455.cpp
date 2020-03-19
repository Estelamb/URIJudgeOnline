#include <iostream>

using namespace std;

int main(){
  int P1, P2, C1, C2;

  scanf("%d %d %d %d", &P1, &C1, &P2, &C2);

  P1 = P1 * C1;
  P2 = P2 * C2;

  if(P1 == P2)
    printf("0\n");
  else if(P1 > P2)
    printf("-1\n");
  else
    printf("1\n");
  return 0;
}
