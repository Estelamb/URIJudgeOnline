#include <iostream>

using namespace std;

// Função para Verificar se é primo
int ehPrimo(int n) {
  if(n == 2) return 1;
  if(n <= 1 || n%2 == 0) return 0;

  for(int i=3; i*i<=n; i+=2)
    if(n%i == 0)
      return 0;

  return 1;
}

int main(){
  int N, X, i;

  cin >> N;

  for(i=0; i<N; i++){
    cin >> X;

    if(ehPrimo(X) == 0) cout << "Not Prime" << endl;
    else cout << "Prime" << endl;
  }
  return 0;
}
