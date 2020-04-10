#include <iostream>

using namespace std;

int main(){
  string sentido;
  int jip = 0, saida = 0, volta = 0, auxEntrada;

  while(1>0){
    cin >> sentido;

    if(sentido == "ABEND") break;

    cin >> auxEntrada;

    if(sentido == "SALIDA"){
      jip++;
      saida += auxEntrada;
    }

    else if(sentido == "VUELTA"){
      jip--;
      volta += auxEntrada;
    }
  }

  if(volta >= saida) cout << volta - saida << endl;
  else cout << saida - volta << endl;

  cout << jip << endl;
  return 0;
}
