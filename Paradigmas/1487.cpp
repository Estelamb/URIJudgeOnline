#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Brinquedo{
public:
  int duracaoBrinquedo, pontuacaoBrinquedo, divisaoBrinquedo;

  Brinquedo(int D, int P){
    this->duracaoBrinquedo = D;
    this->pontuacaoBrinquedo = P;
    divisaoBrinquedo = (double) P/D;
  }
};

// Função Auxiliar, para ordenar brinquedos de acordo com a estrategia
// gulosa, ou seja, melhor escolha local
bool comparacaoOrdenacao(Brinquedo const & x, Brinquedo const & y){
  return x.divisaoBrinquedo > y.divisaoBrinquedo;
}

int main(){
  int N, T, instancia = 1, D, P, i;

  while(1){
    vector <Brinquedo> brinquedos;

    cin >> N;
    cin >> T;

    if(N == 0) return 0;

    for(i=0; i<N; i++){
      cin >> D;
      cin >> P;

      Brinquedo brinquedo(D, P);
      brinquedos.push_back(brinquedo);
    }

    // Ordenar de forma a ter a melhor escolha local, usando da divisão
    sort(brinquedos.begin(), brinquedos.end(), comparacaoOrdenacao);

    int pontuacaoTotal = 0, tempoTotal = 0;

    // Fazendo busca gulosa pela melhor solução
    int cont = 0;
    while(cont < N){
      int auxTempoTotal = tempoTotal + brinquedos[cont].duracaoBrinquedo;

      if(auxTempoTotal <= T){
        pontuacaoTotal += brinquedos[cont].pontuacaoBrinquedo;
        tempoTotal = auxTempoTotal;
      }
      else cont++;
    }

    cout << "Instancia " << instancia++ << endl;
    cout << pontuacaoTotal << endl << endl;
  }
  return 0;
}
