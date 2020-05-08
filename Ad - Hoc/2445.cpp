#include <iostream>
#include <vector>

using namespace std;

int main(){
  int numPalitos, i, aux, contLados = 0;
  vector <int> tamanhoPalitos;

  cin >> numPalitos;

  for(i=0; i<numPalitos; i++){
    cin >> aux;
    tamanhoPalitos.push_back(aux);

    if((i != 0) && (tamanhoPalitos[i-1] < tamanhoPalitos[i])) contLados++;
  }

  if(contLados > 1) contLados++;
  else contLados = 0;

  cout << contLados << endl;
  return 0;
}
