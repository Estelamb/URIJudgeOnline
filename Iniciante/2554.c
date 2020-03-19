#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
   int n, d, i, j, cont, bit;
   char date[1000], evento[1000];

   while(scanf("%d", &n) != EOF){
        scanf("%d", &d);
        bit = 0;
        int resposta[n];

        for (i = 0; i < d; i++){
            scanf("%s", date);
            cont = 0;

            for (j = 0; j < n; j++){
                scanf("%d", &resposta[j]);
            }

            for (j = 0; j < n; j++){
                if (resposta[j] == 1){
                    cont = cont + 1;
                }
            }

            if (bit != 0){
                cont = 0;
            }

            if (cont == n){
                strcpy(evento, date);
                bit = 1;
            }
        }

        if (bit == 1){
            printf("%s\n", evento);
        } else {
            printf("Pizza antes de FdI\n");
          }
   }
}
