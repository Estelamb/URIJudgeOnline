#include <stdio.h>
 
int main(){
    int qt, i, n, m, soma;
    char nome1[100], nome2[100], escolha1[10], escolha2[10];
    scanf("%d", &qt);

    for (i=1; i<=qt; i++){
    scanf("%s", nome1);
    scanf("%s", escolha1);
    scanf("%s", nome2);
    scanf("%s", escolha2);
    scanf("%d %d", &n, &m);
    soma = n + m;
    if (soma % 2 == 0){
        if (escolha1[0] == 'P'){
        printf("%s\n", nome1);
        }else
        printf("%s\n", nome2);
    } else
        if (escolha1[0] == 'I'){
        printf("%s\n", nome1);
        } else
        printf("%s\n", nome2);
    }
    return 0;
}
