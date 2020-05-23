#include <iostream>
#include<stdio.h>

using namespace std;

int main(){
  unsigned long long R, G, B, resposta;

  scanf("%llx", &R);
  scanf("%llx", &G);
  scanf("%llx", &B);

  resposta = (R/G) * (R/G);
  resposta += resposta * (G/B) * (G/B) + 1;

  printf("%llx\n", resposta);

  return 0;
}
