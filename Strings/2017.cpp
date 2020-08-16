// URI, 2017, Seis Strings
// Nesta solução, a cada entrada verificamos o numero de caracteres
// iguais em ambas as strings, já amarzenando a maior sequencia igual
// e ao final, caso na subtração da distancia de edição (tam string - l(igual))
// for menor que n então imprimimos a posição e a menor distancia de edição

#include <iostream>

using namespace std;
 
int main(){
	int i, n, j, k, l=0, pos=0;
	string x, y;

	cin >> x >>n;

	for(j=1; j<=5; j++){
		cin >> y;

		k =  0;

		for(i=0; i<y.size(); i++){
			if(y[i] == x[i]) k++;
		}

		if(k>l) {
			l = k;
		  pos  =  j	;
		}
 
}
	if(n > x.size()) cout << 1 <<endl << x.size()<<endl;
	else {
		  if(x.size()-l < n) cout << pos << endl << x.size()-l<< endl;
	      else cout <<"-1n";
	}
 
	return 0;
}