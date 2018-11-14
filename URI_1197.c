#include <stdio.h>
#include <stdlib.h>

int main(){
    int v,t;

    while(scanf("%d", &v) != EOF){
        scanf("%d", &t);
        printf("%d\n", v*(2*t));
    }

    return 0;
}
