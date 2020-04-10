#include <iostream>

using namespace std;

// Função para calcular MDC de cada caso
int mdc(int x, int y){
  int resto;

  do{
    resto = x%y;
    x = y;
    y = resto;
  } while(resto != 0);

  return x;
}

int main(){
  int N, F1, F2, i;

  cin >> N;

  for(i=0; i<N; i++){
    cin >> F1 >> F2;

    cout << mdc(F1, F2) << endl;
  }
  return 0;
}
