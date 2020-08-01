#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
    int a, b, soma, flag, digitos, i, j, k, number;
    int numero[4];

    while(scanf("%d %d", &a, &b) == 2){
        soma = 0;

        for(i=a; i<=b; i++){
            digitos = 0;
            flag = 0;
            number = i;

            while(number != 0){
                numero[digitos] = number%10;
                number /= 10;
                digitos++;
            }

            for(j=0; j<digitos; j++){
                for(k=j+1; k<digitos; k++){
                    if(numero[j] == numero[k]) flag = 1;
                }
            }

            if(flag == 0) soma++;
        }

        cout << soma << endl;
    }

    return 0;
}