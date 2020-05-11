#include <iostream>

using namespace std;

int main(){
  int abasAbertas, acoes, i;
  string acao;

  cin >> abasAbertas;
  cin >> acoes;

  for(i=0; i<acoes; i++){
    cin >> acao;

    if(acao == "fechou"){
      abasAbertas -= 1;
      abasAbertas += 2;
    }
    else if(acao == "clicou") abasAbertas -= 1;
  }

  cout << abasAbertas << endl;
  return 0;
}
