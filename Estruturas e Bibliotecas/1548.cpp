// URI, 1548, Fila do Recreio
// neste exercicio foi necessário apenas de uma ordenção
// descrecente unida com uma comparação do vetor antes e
// depois da ordenação

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, numAlunos, contMudancas, i, j;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> numAlunos;

        vector <int> notaAlunos(numAlunos);
        vector <int> filaOrdenada(numAlunos);

        for(j=0; j<numAlunos; j++){
            cin >> notaAlunos[j];
            filaOrdenada[j] = notaAlunos[j];
        }

        contMudancas = 0;
        // ordenando o vetor ao contrario para se adequar
        // ao criterio da maior nota para menor
        sort(filaOrdenada.rbegin(), filaOrdenada.rend());

        for(j=0; j<numAlunos; j++){
            if(notaAlunos[j] == filaOrdenada[j]) contMudancas++;
        }

        cout << contMudancas << endl;
    }
    return 0;
}