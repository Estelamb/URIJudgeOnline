#include <stdio.h>
#include <stdlib.h>

int main(){
    long long meu,op;

    while(scanf("%lld", &meu) != EOF){
        scanf("%lld", &op);

        if(meu > op){
            printf("%lld\n", meu-op);
        } else {
            printf("%lld\n", op-meu);
        }
    }

    return 0;
}
