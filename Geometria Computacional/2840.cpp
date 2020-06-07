#include <iostream>
#include <math.h>

using namespace std;

#define PI 3.1415

int main(){
  int r, l;

  cin >> r >> l;

  double volume = (PI * (pow(r, 3))) * (4.0/3.0);
  double baloes = floor(l/volume);

  cout << baloes << endl;
  return 0;
}
