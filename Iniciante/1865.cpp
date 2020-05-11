#include <iostream>

using namespace std;

int main(){
  int casosTests, pesoNewtons, i;
  string nome;

  cin >> casosTests;

  for(i=0; i<casosTests; i++){
    cin >> nome;
    cin >> pesoNewtons;

    if(nome == "Thor") cout << "Y" << endl;
    else cout << "N" << endl;
  }
  return 0;
}
