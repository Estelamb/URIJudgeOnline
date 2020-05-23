#include <iostream>

using namespace std;

int main(){
  string frase = "Feliz nat";
  int vezesA, i;

  cin >> vezesA;

  for(i=0; i<vezesA; i++) frase += "a";
  frase += "l!";

  cout << frase << endl;
  return 0;
}
