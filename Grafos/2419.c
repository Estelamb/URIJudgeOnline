#include <stdio.h>

int main() {
    int n,m,i,j,numcostas;
    numcostas = 0;
    scanf("%d %d",&m,&n);
    char matriz[m][n];
    for(j=0;j<n;j++){
        scanf("%s",&matriz[j]);
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(matriz[i][j]=='#'){
                if(matriz[i][j-1] == '.') {
                    numcostas++;
                } else if(matriz[i-1][j] == '.'){
                    numcostas++;
                }else if(matriz[i+1][j] == '.'){
                    numcostas++;
                }else if(matriz[i][j+1] == '.'){
                    numcostas++;
                }else if(i==n-1 || i==n){
                    numcostas++;
                }else if(j==m-1 || j == m ){
                    numcostas++;
                }else if(i==0){
                    numcostas++;
                }else if(j==0){
                    numcostas++;
                }
            }
        }
    }

    printf("%d\n",numcostas);

    return 0;
}
