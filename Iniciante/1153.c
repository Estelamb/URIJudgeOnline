#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, fat=1,i;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        fat = fat*i;
    }

    printf("%d\n", fat);
    return 0;
}
