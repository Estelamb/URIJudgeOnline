#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned long long num;

    while(scanf("%lld", &num) != 0){
        unsigned long long i=4, fatorial=1;

        if(num == 0){
            return 0;
        }


        while(i <= num){
            fatorial = (fatorial*i)%1000000009;
            i++;
        }
        printf("%lld\n", fatorial);
    }
}
