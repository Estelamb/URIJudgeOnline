#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int num, pos, i, maior;

    for(i=0; i<100; i++){
        scanf("%d", &num);

        if(i==0){
            maior = num;
            pos = i+1;
        }

        if(num>=maior){
            maior = num;
            pos = i+1;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", pos);
    return 0;
}
