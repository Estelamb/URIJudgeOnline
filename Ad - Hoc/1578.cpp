#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
  // Numero matriz analisadas, numero de linhas e colunas de cada matriz
  unsigned short N, M, i, j, k, l, qtsDigitosAtual, casos = 4, linha, coluna;
  long double maior;

  cin >> N;

  for(i=0; i<N; i++){
    cin >> M;

    long double matriz[M][M];

    for(j=0; j<M; j++){
      for(k=0; k<M; k++){
        cin >> matriz[j][k];

        matriz[j][k] = matriz[j][k]*matriz[j][k];
      }
    }

    cout << "Quadrado da matriz #" << casos << ":" << endl;
    casos++;

    for (linha = 0; linha < M; linha++){
      // Para encontrar o recuo do print, iremos encontrar o maior valor
      // de cada coluna
			for (coluna = 0; coluna < M; coluna++){
				maior = 0;

				// Acha o maior elemento da coluna;
				for (k = 0; k < M; k++)
					if (matriz[k][coluna] > maior) maior = matriz[k][coluna];

				// log na base 10 nos da a quantidade de digitos de um número;
				qtsDigitosAtual = ((floor(log10(maior))) + 1);

				// Tive muitos problemas por causa disso;
				// Não pode haver espaços após o último elemento na coluna!
				if (coluna != M && coluna != 0)
					printf(" ");

				// flag '*' antes da diretiva de formatação nos dá um recuo dinâmico
				// Na impressão;
				printf("%*.Lf", qtsDigitosAtual, matriz[linha][coluna]);
			}


			printf("\n");

		}

    // Quebra de linha condicional, para casos que não são a ultima matriz
    if(i != N) cout << endl;
  }

  return 0;
}
