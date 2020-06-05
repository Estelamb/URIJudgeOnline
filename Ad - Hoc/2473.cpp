#include <iostream>

using namespace std;

int main(){
  int aposta[6], sorteados[6], cont = 0;

  for(int i=0; i<6; i++){
    cin >> aposta[i];
  }

  for(int i=0; i<6; i++){
    cin >> sorteados[i];
  }

  for(int i=0; i<6; i++){
    for(int j=0; j<6; j++){
      if(aposta[i] == sorteados[j]) cont++;
    }
  }

  if(cont < 3) cout << "azar" << endl;
  else if(cont == 3) cout << "terno" << endl;
  else if(cont == 4) cout << "quadra" << endl;
  else if(cont == 5) cout << "quina" << endl;
  else if(cont == 6) cout << "sena" << endl;
  return 0;
}
