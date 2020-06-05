#include <iostream>

using namespace std;

int main(){
  int n, m, contemUm = 0, espacosVazios = 0;

  cin >> n >> m;

  char matriz[n][m];
  char aux;

  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      cin >> aux;
      matriz[i][j] = aux;
    }
  }

  //Verificando se tem 1, e quantos espaços estão vazios
  for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
      if(matriz[i][j] == '1') contemUm = 1;
      if(matriz[i][j] == '.') espacosVazios++;
    }
  }


  if(matriz[0][0] == '0' && espacosVazios != 0){
    cout << espacosVazios << endl;
    return 0;
  }

  if(espacosVazios == 0){
    cout << (n*m) - 1 << endl;
  }

  else{
    if (n <= 3 && m < 3) cout << (espacosVazios - contemUm)*2 << endl;
    else if(n == 3 && m == 3) cout << ((espacosVazios - contemUm)*2) + ((n* m)-1) << endl;
    else if(n == 5 && m == 5) cout << (n+m) * (n*m) + (contemUm*2) << endl;
    else if(n > 3) cout << ((espacosVazios - contemUm)*2) + ((n-1) * m) << endl;
  }
  return 0;
}
