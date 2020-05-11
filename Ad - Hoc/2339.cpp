#include <iostream>

using namespace std;

int main(){
  int competidores, papelComprado, numPapel;

  cin >> competidores >> papelComprado >> numPapel;

  if((papelComprado/competidores) >= numPapel) cout << "S" << endl;
  else cout << "N" << endl;
  return 0;
}
