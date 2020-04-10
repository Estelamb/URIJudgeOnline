#include <iostream>
#include <vector>

using namespace std;

int main(){
  int soma = 225, auxEntrada, i;

  for(i=0; i<5; i++){
    cin >> auxEntrada;

    if(i == 0) soma += auxEntrada*300;
    else if(i == 1) soma += auxEntrada*1500;
    else if(i == 2) soma += auxEntrada*600;
    else if(i == 3) soma += auxEntrada*1000;
    else if(i == 4) soma += auxEntrada*150;
  }

  cout << soma << endl;
  return 0;
}
