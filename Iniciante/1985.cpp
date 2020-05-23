#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int pedidos;
  double codigo, numCodigo, total = 0, i;

  cin >> pedidos;

  for(i=0; i<pedidos; i++){
    cin >> codigo >> numCodigo;

    if(codigo == 1001) total += numCodigo * 1.50;
    else if(codigo == 1002) total += numCodigo * 2.50;
    else if(codigo == 1003) total += numCodigo * 3.50;
    else if(codigo == 1004) total += numCodigo * 4.50;
    else if(codigo == 1005) total += numCodigo * 5.50;
  }

  printf("%.2lf\n", total);
  return 0;
}
