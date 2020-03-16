#include <iostream>

using namespace std;

int ehPrimo(int n) {
  if(n == 2) return 1;
  if(n <= 1 || n%2 == 0) return 0;

  for(int i=3; i*i<=n; i+=2)
    if(n%i == 0)
      return 0;

  return 1;
}

int main(){
  int testes;
  int num;

  cin >> testes;

  for(int i=0; i<testes; i++){
    cin >> num;

    if(ehPrimo(num) == 0) cout << num << " nao eh primo" << endl;
    if(ehPrimo(num) == 1) cout << num << " eh primo" << endl;
  }

  return 0;
}
