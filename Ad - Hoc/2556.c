#include <stdio.h>
#include <stdlib.h>

int main(){
   int n, i, j, pessoas=1,pes;

   /*abertura do while para processar "infinitamente" atraves da leitura do número de repetiçoes de cada entrada e saida*/

   while(scanf("%d", &n) != EOF){
        int m[n], temp;

	/*criando um vetor com os valores recebidos*/

        for(i=0; i<n; i++){
            scanf("%d", &m[i]);
        }

	/*dado o vetor é necessário coloca-lo de forma crescente, para fazer a analise do tempo que os participantes estiveram simultaneamente*/

        for(i=0;i<n; i++){
            for(j=i+1; j<n; j++){
                if(m[i]>m[j]){
                    temp = m[i];
                    m[i] = m[j];
                    m[j] = temp;
                }
            }
        }

	/*para fazer a analise, para um caso mais geral, assim como as medianas, basta selecionar as duas posições centrais, e subtrair uma pela outra, e assim encontrar o tempo simultaneo*/

        pes = m[n/2] - m[(n/2)-1];

	/*durante o print é possivél colocar o número de pessoas presentes, pois o vetor tem duas posições para cada pessoa, logo as pessoas presentes = n/2*/

        printf("%d %d\n", n/2, pes);

   }
}
