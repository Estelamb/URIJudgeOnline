#include <iostream>

using namespace std;

int main(){
  int numBandejas, latas, copos, i, coposQuebrados = 0;

  cin >> numBandejas;

  for(i=0; i<numBandejas; i++){
    cin >> latas >> copos;

    if(copos < latas) coposQuebrados += copos;
  }

  cout << coposQuebrados << endl;
  return 0;
}
