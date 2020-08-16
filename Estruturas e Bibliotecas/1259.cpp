// URI, 1259, Pares e Ímpares
// para esse exercício basta utilizar da ordenaçõa
// nos vetores, e na hora da saída fazer a de impares
// ao contrario

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n, aux, i, contPar = 0, contImpar = 0;
    vector <int> pares;
    vector <int> impares;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> aux;

        // na entrada fazemos um vetor de impares
        // e um de pares e contamos o numero de
        // componentes
        if(aux%2 == 0){
            pares.push_back(aux);
            contPar++;
        } 
        else {
            impares.push_back(aux);
            contImpar++;
        }
            
    }

    // ordenando os vetores
    sort(pares.begin(), pares.end());
    sort(impares.begin(), impares.end());

    // saída pedida no exercicio com pares normalmente
    // e impares de tras para frente
    for(i=0; i<contPar; i++) cout << pares[i] << endl;
    for(i=contImpar-1; i> -1; i--) cout << impares[i] << endl;
    return 0;
}