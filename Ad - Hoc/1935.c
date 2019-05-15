#include <stdio.h>
#include <stdlib.h>

typedef enum {
	CIMA,BAIXO,ESQUERDA,DIREITA
} Direcao;

int main(){
	int **espiral = NULL;
	int m,n,mn,ins = 1, b;

	int i,j,limS,limI,limE,limD;
	Direcao dir = DIREITA;

	scanf("%d %d", &m, &b);

  n = m;

	espiral = (int **)malloc(m * sizeof(int *));
	for (i = 0; i < m; i++)
		espiral[i] = (int *)malloc(n * sizeof(int));

	mn = m * m;
	limS = 0;
	limI = m;
	limE = 0;
	limD = n;

	while (ins <= mn) {
		switch (dir) {
			case DIREITA:
				for (i = limE; i < limD; i++)
          espiral[limS][i] = ins++;
				limS++;
				dir = BAIXO;
				break;

			case BAIXO:
				for (i = limS; i < limI; i++)
          espiral[i][limD-1] = ins++;
				limD--;
				dir = ESQUERDA;
				break;

			case ESQUERDA:
				for (i = limD-1; i >= limE; i--)
					espiral[limI-1][i] = ins++;
				limI--;
				dir = CIMA;
				break;

			case CIMA:
				for (i = limI-1; i >= limS; i--)
					espiral[i][limE] = ins++;
				limE++;
				dir = DIREITA;
				break;
		}
	}

  for(i=0; i<m; i++){
    for(j=0; j<m; j++){
      if(espiral[i][j] == b)
        printf("%d %d\n", i+1, j+1);
    }
  }

	return 0;
}
