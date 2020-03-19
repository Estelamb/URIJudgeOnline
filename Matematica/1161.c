#include <stdio.h>

int main() {
    long long int m, n, i, j, fat1, fat2;

    while(scanf("%lld %lld", &m, &n)!=EOF){
        fat1=1;
        fat2=1;

        for(i=1; i<=m; i++){
            fat1 = fat1*i;
        }

        for (j=1; j<=n; j++){
            fat2 = fat2*j;
        }

        printf("%lld\n", fat1+fat2);
    }
}
