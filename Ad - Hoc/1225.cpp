#include <iostream>

using namespace std;

// s = soma das notas dos integrantes
// l = numero de integrantes
int coral(int cor[], int s, int l){
    if(s%l != 0) return -1;

    int maior = 0, i;
    s = s/l;

    for(i=0; i<l; i++){
        if(cor[i] > s) maior += cor[i] - s;
    }

    return maior+1;
}

int main(){
    int n, soma, i;

    while(cin >> n){
        int vet[n];
        soma = 0;

        for(i=0; i<n; i++){
            cin >> vet[i];
            soma += vet[i];
        }

        cout << coral(vet, soma, n) << endl;
    }
}