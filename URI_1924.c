#include <stdio.h>
 
int main(){
    int entrada, i;
    char curso[100];

    scanf("%d", &entrada);

    for (i=0; i< entrada; i++){
        scanf("%s", curso);
        getchar();
    }
    printf("Ciencia da Computacao\n");
}
