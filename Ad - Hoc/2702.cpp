#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector <int> refeicoes;
  vector <int> pedidos;
  int i, aux, pedidosNaoAtendidos = 0;

  for(i=0; i<3; i++){
    cin >> aux;
    refeicoes.push_back(aux);
  }

  for(i=0; i<3; i++){
    cin >> aux;
    pedidos.push_back(aux);
  }

  for(i=0; i<3; i++){
    if((refeicoes[i] - pedidos[i]) < 0) pedidosNaoAtendidos += (refeicoes[i] - pedidos[i])*(-1);
  }

  cout << pedidosNaoAtendidos << endl;
  return 0;
}
