#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    scanf("%d", &n);

    int fib[n];

    for(i=0; i<n; i++){
        if(i==0){
            fib[0] = 0;
            printf("%d ", fib[i]);
        } else if(i==1){
            fib[1] = 1;
            printf("%d ", fib[i]);
        }else if(i==n-1){
            fib[i] = (fib[i-1] + (fib[i-2]));
            printf("%d\n", fib[i]);
        } else{
            fib[i] = (fib[i-1] + (fib[i-2]));
            printf("%d ", fib[i]);
        }
    }
    return 0;
}
