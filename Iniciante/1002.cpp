#include <iostream>
#include <math.h>

using namespace std;

int main(){
  double raio, area;
  cin >> raio;

  area = (pow(raio,2))*M_PI;

  printf("A=%.4lf\n", area);
  return 0;
}
