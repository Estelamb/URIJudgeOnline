#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main(){
  int N, i, comportar = 0, naocomportar = 0;
  char comportamento;
  string aux;
  vector <string> nomes;

  cin >> N;

  for(i=0; i<N; i++){
    cin >> comportamento;
    cin >> aux;

    nomes.push_back(aux);

    if(comportamento == '+') comportar++;
    else naocomportar++;
  }

  stable_sort(nomes.begin(), nomes.end());

  for(auto i=nomes.begin(); i!=nomes.end(); i++) cout << *i << endl;

  cout << "Se comportaram: " << comportar << " | Nao se comportaram: " << naocomportar << endl;

  return 0;
}
