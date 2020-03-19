#include <stdio.h>
#include <stdlib.h>

int ProcurarSete(int a){
    int ans = a, pot = 1;

    while(a != 0){
        if(a % 10 == 7){
            ans -= 7*pot;
        }
        pot *= 10;
        a /= 10;
    }
    return ans;
}

int main(){
    int a, b, resultado;
    char op;

    scanf("%d %c %d", &a, &op, &b);
    a = ProcurarSete(a);
    b = ProcurarSete(b);

    if(op == '+')
      resultado = a + b;
    else
      resultado = a * b;

    printf("%d\n", ProcurarSete(resultado));
    return 0;
}
