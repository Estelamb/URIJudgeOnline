#include <iostream>

using namespace std;

int fotons = 40000000;

int main(){
  long long int a, n, f, i, cont = 0;

  cin >> a;
  cin >> n;

  for(i=0; i<n; i++){
    cin >> f;

    if(f*a >= fotons) cont++;
  }

  cout << cont << endl;
  return 0;
}
