// URI, 1520, Parafusos e Porcas
// utiliza de uma busca em uma posição dada
// somando seus antecessores

#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    // n -> caixas de parafusos
    int n, cont;
    int vetor[101];
    int i, j, inicio, fim;

    while(cin >> n){
        // iniciando o vetor com 0
        for(i=0; i<101; i++) vetor[i] = 0;

        for(j=0; j<n; j++){
            cin >> inicio >> fim;

            // nas posições dadas soma +1 parafuso
            // em cada caixa do intervalo
            for(i=inicio; i<=fim; i++) ++vetor[i];
        }

        cont = 0;
        cin >> j;

        // caso tenha um valor na posição dada
        // iremos somar os valores ate antes dela, 
        // e calcular quantos parafuso tem
        if(vetor[j]){
            for(i=1; i<j; i++) cont += vetor[i];

            cout << j << " found from " << cont << " to " << (cont + vetor[i] - 1) << endl;
        }

        else cout << j << " not found" << endl;
    }
    return 0;
}