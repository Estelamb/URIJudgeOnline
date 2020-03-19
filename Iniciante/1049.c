#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char pla1[15], pla2[15], pla3[15];

    scanf("%s", pla1);
    scanf("%s", pla2);
    scanf("%s", pla3);

    if(0 == strcmp(pla1, "vertebrado")){
        if(0 == strcmp(pla2, "ave")){
            if(0 == strcmp(pla3, "carnivoro")){
                printf("aguia\n");
            } else if(0 == strcmp(pla3, "onivoro")){
                printf("pomba\n");
            }
        } else if(0 == strcmp(pla2, "mamifero")){
            if(0 == strcmp(pla3, "onivoro")){
                printf("homem\n");
            } else if(0 == strcmp(pla3, "herbivoro")){
                printf("vaca\n");
            }
        }
    } else if(0 == strcmp(pla1, "invertebrado")){
        if(0 == strcmp(pla2, "inseto")){
            if(0 == strcmp(pla3, "hematofago")){
                printf("pulga\n");
            } else if(0 == strcmp(pla3, "herbivoro")){
                printf("lagarta\n");
            }
        } else if(0 == strcmp(pla2, "anelideo")){
            if(0 == strcmp(pla3, "hematofago")){
                printf("sanguessuga\n");
            } else if(0 == strcmp(pla3, "onivoro")){
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
