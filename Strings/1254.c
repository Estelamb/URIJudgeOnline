#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char tag[11];
    char linha[51];
    char numero[5];
    int i,j,flag,k,l,flagson,m;
    while(scanf("%s",tag) != EOF){
        scanf("%s",numero);
        getchar();
        fgets(linha,51,stdin);
        for(i=0;i<strlen(linha);i++){
            flagson = 0;
            if(linha[i] == '<'){

                j = i+1;
                while(1){
                    if (linha[j]!='>')
                        j++;
                    if(linha[j] == '\0'){
                        flagson = 1;
                        break;
                    }
                    if (linha[j] == '>'){
                        flagson = 2;
                        break;
                    }
                }
            }

            if (flagson == 2){
                k = j;
                for (j = i; j < k; j++){
                    flag = 0;
                    if(toupper(tag[0]) == toupper(linha[j]))
                        if(strlen(tag) > 1){
                            flag = 1;
                            for(l=j+1 ; l<j+strlen(tag) ; l++){
                                m = l-j;
                                if (toupper(tag[m]) == toupper(linha[l]))
                                    flag++;
                                else
                                    break;

                            }
                        } else{
                            flag = 1;
                            l = j+1;
                            }
                    if (flag == strlen(tag)){
                        printf("%s",numero);
                        j = l-1;
                    }
                    else{
                        printf("%c", linha[j]);
                    }
                    i = j;
                }
            }

            else{
                printf("%c",linha[i]);
            }
        }
    }
}
