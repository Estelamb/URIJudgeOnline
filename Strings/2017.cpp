#include <iostream>
#include <string.h>

using namespace std;

// Função Auxiliar para podermos fazer o cálculo de Minimo
// na função do calculo de distancia
#define MIN(a,b) (((a)<(b))?(a):(b))

// Função que gera o Cálculo em si da Distancia de Edição
int calculoDistanciaEdicao(int **matrizDistanciaEdicao, int linhas, int colunas, char* palavraA, char* palavraB){
    int valor;

    for(int i=1; i<linhas; i++){
        for(int j=1; j<colunas; j++){
            if(palavraA[j-1] == palavraB[i-1]) valor = 0;
            else valor = 1;

            matrizDistanciaEdicao[i][j] = MIN(matrizDistanciaEdicao[i-1][j-1] + valor, matrizDistanciaEdicao[i-1][j] + 1);
            matrizDistanciaEdicao[i][j] = MIN(matrizDistanciaEdicao[i][j], matrizDistanciaEdicao[i][j-1] + 1);
        }
    }

    return matrizDistanciaEdicao[linhas-1][colunas-1];
}

int main(){
  // Palavras
  char palavraA[100];
  char palavraB[100];
  int numMax, k;

  // Entrada das duas palavras
  scanf("%s", palavraA);
  cin >> numMax;

  int menor = numMax, indice = 0;

  for(k=0; k<5; k++){
    scanf("%s", palavraB);

    int colunas = strlen(palavraA) + 1;
    int linhas = strlen(palavraB) + 1;


    // Matriz de Distancia de Edição
    int **matrizDistanciaEdicao = (int**) malloc (linhas * sizeof(int*));

    for (int i = 0; i <linhas; i++){
        matrizDistanciaEdicao[i] = (int*) malloc(colunas * sizeof(int));

        for (int j = 0; j < colunas; j++){
            if(j == 0) matrizDistanciaEdicao[i][j] = i;
            else if(i == 0) matrizDistanciaEdicao[i][j] = j;
            else matrizDistanciaEdicao[i][j] = 0;
        }
    }

    if(menor > calculoDistanciaEdicao(matrizDistanciaEdicao, linhas, colunas, palavraA, palavraB)){
       menor = calculoDistanciaEdicao(matrizDistanciaEdicao, linhas, colunas, palavraA, palavraB);
       indice = k+1;
    }
  }

  if(menor >= numMax) cout << "-1" << endl;
  else{
    cout << indice << endl;
    cout << menor << endl;
  }

  return 0;
}
