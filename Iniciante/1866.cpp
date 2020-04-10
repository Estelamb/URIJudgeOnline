#include <iostream>

using namespace std;

int main(){
  int n, c, indice;

  cin >> n;

  for(indice=0; indice<n; indice++){
    cin >> c;

    if(c%2 == 0) cout << "0" << endl;
    else cout << "1" << endl;
  }
  return 0;
}
