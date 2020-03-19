#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int tam=0,i,j,casos,x;

    scanf("%d",&casos);

    for(x=0;x<casos;x++){
        tam = 0;
        char palavras [50][50],a,tmp[50];
        while (scanf("%s",palavras[tam]) != ' '){
            if(getchar() == '\n')
                break;
            tam++;
        }
        for (i = 1; i <= tam; i++) {
            j = i;
            while (j > 0 && strlen(palavras[j - 1]) < strlen(palavras[j])) {
                    strcpy(tmp,palavras[j]);
                    strcpy(palavras[j],palavras[j-1]);
                    strcpy(palavras[j-1],tmp);
                    j--;
            }
        }
        for(i = 0; i<= tam; i++){
            if(i != 0)
                printf(" ");
            printf("%s", palavras[i]);
        }
    printf("\n");
    }

