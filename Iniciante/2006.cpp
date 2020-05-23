#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
  int tipoCha, i, aux;
  vector <int> respostas;

  cin >> tipoCha;

  for(i=0; i<5; i++){
    cin >> aux;
    respostas.push_back(aux);
  }

  cout << count(respostas.begin(), respostas.end(), tipoCha) << endl;
  return 0;
}
