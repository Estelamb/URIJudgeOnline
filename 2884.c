#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m, l, i, k, j,a, cont,temp1,alt;
    alt=0;
    scanf("%d %d", &n, &m);

    int lampadas[m];

    for(i=0; i<m; i++){
        lampadas[i] = 0;
    }

    scanf("%d", &l);

    for(i=0; i<l; i++){
        scanf("%d", &k);

        lampadas[k-1] = 1;
    }


    for(i=0; i<n; i++){
        scanf("%d", &l);

        for(j=0; j<l; j++){
            scanf("%d", &k);

            if(lampadas[k-1] == 0){
                lampadas[k-1] = 1;
            } else if(lampadas[k-1] == 1){
                lampadas[k-1] = 0;
            }

            cont=0;

            for(a=0; a<m; a++){
                if(lampadas[a] == 0){
                    cont++;
                }
            }

            if(cont == m){
                temp1 = i+1;
                alt=1;
            }
        }
    }

    if(alt==1){
        printf("%d\n", temp1);
    } else{
        printf("-1\n");
    }
}
