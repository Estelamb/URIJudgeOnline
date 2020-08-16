// URI, 1029, Fibonacci, Quantas Chamadas?
// Nesse algoritmo foi utilizado o conceito de recursão
// para realizar o cálculo da soma da sequencia de fibonacci
// e o numero de chamadas feitas

#include <iostream>

using namespace std;

// usado para calcular o numero de chamadas recursivas
// feitas durante o calculo de fibonacci
int contCalls;

int fib(int n){
    contCalls++;

    if(n < 2) return n;
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int nCalls[40];
    int n, t, res;

    cin >> t;

    while(t--){
        contCalls = 0;
        cin >> n;

        res = fib(n);
        cout << "fib(" << n << ") = " << contCalls - 1 << " calls = " << res << endl;
    }
    return 0;
}