#include <iostream>

using namespace std;

int main(){
  int n, m, i, j;

  while(1>0){
    cin >> n >> m;

    if(n == 0 || m == 0) return 0;

    // Entrada Dados Matriz
    int matriz[n][m];
    for(i=0; i<n; i++)
      for(j=0; j<m; j++)
        cin >> matriz[i][j];

      // Verificando as condições
      int contSolucao, resolveTudo = 0, resolveExercicio[m], peloMenosUmExercicio = 0;

      for(i=0; i<m; i++)
        resolveExercicio[i] = 0;

      for(i=0; i<n; i++){
        contSolucao = 0;

      for(j=0; j<m; j++){
        if(matriz[i][j] == 1){
          contSolucao++;
          resolveExercicio[j]++;
        }
      }

      if(contSolucao == m) resolveTudo++;
      if(contSolucao >= 1) peloMenosUmExercicio++;
    }

    int contCondicao = 0;

    // Condicao 1, ninguem resolveu todos os problemas
    if(resolveTudo == 0) contCondicao++;

    // Condicao 2, Todo problema foi resolvido por pelo menos uma pessoa
    // Condicao 3, Nao ha nenhum problema resolvido por todos
    int auxCont = 0, cont = 0;
    for(i=0; i<m; i++){
      if(resolveExercicio[i] > 0) auxCont++;
      if(resolveExercicio[i] == n) cont++;
    }

    if(auxCont == m) contCondicao++;
    if(cont == 0) contCondicao++;

    // Condicao 4, Todos resolveram pelo menos um exercicio
    if(peloMenosUmExercicio == n) contCondicao++;

    cout << contCondicao << endl;
  }
  return 0;
}
