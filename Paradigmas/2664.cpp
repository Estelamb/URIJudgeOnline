// Exercicio 2664, URI, Ginastica
// Nesse exercicio foi utilizado de uma matriz contadora de 
// movimentos possiveis

#include <iostream>
#include <cstring>

using namespace std;

long long mod = 1000000007L;

// Funcao que soma os valores e verifica
// se precisa retornar valor como mod
long long add(long long x, long long y) {
  x += y;

  if (x < mod) return x;

  return x % mod;
}

int main(){
    int t, m, n, i, j;
    long long totalDificuldadeTreino = 0L;

    // t -> minutos, m -> min dificuldade, n -> max dificuldade
    cin >> t >> m >> n;

    int tamPossib = n-m+1;
    long long matrizPossib[2][tamPossib];

    // iniciando a matriz de possibilidades com 1
    for(i=0; i<tamPossib; i++){
        matrizPossib[0][i] = 1;
        matrizPossib[1][i] = 1;
    }

    int k=1;
    for(i=1; i<t; i++){
        for(j=1; j<(n-m); j++){
            // soma a quantidade de movimentos de cada posição
            matrizPossib[k][j] = add(matrizPossib[1-k][j-1], matrizPossib[1-k][j+1]);
        }

        // nos extremos apenas copia os valores do vizinho
        matrizPossib[k][0] = matrizPossib[1-k][1];
        matrizPossib[k][n-m] = matrizPossib[1-k][n-m-1];

        k = (i+1)%2;
    }

    // seleciona a ultima linha atualizada
    // em numeros pares retorna 1 (verdadeiro)
    // e em numeros impares 0 (falso)
    k = (t%2==0 ? 1:0);

    // soma a quantidade total
    for(i=0; i<tamPossib; i++){
        totalDificuldadeTreino = add(totalDificuldadeTreino, matrizPossib[k][i]);
    }

    cout << totalDificuldadeTreino << endl;
}