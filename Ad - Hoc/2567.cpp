// URI, 2567, Vírus
// Exercicio Resolvido com a Lógica de Ordenação 
// e soma em pares

#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

int main(){
    int tamVetor, i;
    int soma;

    while(cin >> tamVetor){
        vector <int> idades(tamVetor);
        int aux;
        soma = 0;

        // entrada idades no vetor
        for(i=0; i<tamVetor; i++) cin >> idades[i];

        // ordenando o vetor
        sort(idades.begin(), idades.end());

        i = 0;
        int j = tamVetor - 1;

        // calculando a soma de idades, com o vetor ordenado
        // basta realizar os calculos dos pares inicio e fim
        // de forma que seja positivo (valor absoluto)
        while(j > i) soma += abs(idades[i++] - idades[j--]);

        cout << soma << endl;
    }
    return 0; 
}