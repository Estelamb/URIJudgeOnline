#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[20];
    int palavras, i, j, e1, e2, e3;
    char one[10] = "one";
    char two[10] = "two";
    char three[10] = "three";

    scanf("%d", &palavras);

    for(i=0; i < palavras; i++){
        scanf("%s", palavra);
        e1 = 0;
        e2 = 0;
        e3 = 0;

        if (strlen(palavra)==3){
            for(j=0; j < 3; j++){
                if(palavra[j] != one[j])
                    e1++;
                if(palavra[j] != two[j])
                    e2++;

                e3 = 1000;
            }
        } else {
            for(j=0; j<5; j++){
                if(palavra[j] != three[j])
                    e3++;
                    e1 = 2344;
                    e2 = 45667;
            }
          }


        if(e1 <= 1)
            printf("1\n");
        if(e2 <= 1)
            printf("2\n");
        if(e3 <= 1)
            printf("3\n");
    }
}
