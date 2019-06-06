#include <stdio.h>

int main() {
    long long int nSitios, sitiosPercorridos, caminhoSitio, restante, i;
    scanf("%lld", &nSitios);
    long long int nCarneirosSitio[nSitios], nSitiosRoubados[nSitios];

    caminhoSitio = 0;
    restante =0;
    sitiosPercorridos =0;

    for(i=0;i<nSitios;i++){
        scanf("%lld", &nCarneirosSitio[i]);
        nSitiosRoubados[i] = 0;
    }
     while(1){

        if(caminhoSitio==0 && nCarneirosSitio[caminhoSitio]%2==0) {
            nSitiosRoubados[caminhoSitio] = 1;
            if (nCarneirosSitio[caminhoSitio] > 0) {
                nCarneirosSitio[caminhoSitio] -= 1;
            }
            break;
        }
        else if((caminhoSitio==(nSitios-1)) && nCarneirosSitio[caminhoSitio]%2==1) {
            nSitiosRoubados[caminhoSitio] = 1;
            nCarneirosSitio[caminhoSitio] -= 1;
            break;
        }
        else if(nCarneirosSitio[caminhoSitio]%2==1){
            nSitiosRoubados[caminhoSitio] = 1;
            nCarneirosSitio[caminhoSitio] -=1;
            caminhoSitio +=1;
        }
        else if(nCarneirosSitio[caminhoSitio]%2==0){
            nSitiosRoubados[caminhoSitio] = 1;
            if(nCarneirosSitio[caminhoSitio]>0) {
                nCarneirosSitio[caminhoSitio] -= 1;
            }
            caminhoSitio -=1;
        }

    }

    for(i=0;i<nSitios;i++){
        sitiosPercorridos += nSitiosRoubados[i];
        restante += nCarneirosSitio[i];
    }
    printf("%lld %lld\n",sitiosPercorridos, restante);

    return 0;
}
