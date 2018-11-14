#include <stdio.h>
#include <stdlib.h>

int main(){
    char alfabeto[27];
    int n, i;

    while(scanf("%s", alfabeto) != EOF){
        scanf("%d", &n);
        int letras[n];

        for (i=0; i<n; i++){
        scanf("%d", &letras[i]);
        }
        for (i=0; i<n; i++){
        printf("%c", alfabeto[letras[i]-1]);
        }
        printf("\n");
    }
}
