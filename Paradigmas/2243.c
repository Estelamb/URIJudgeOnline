#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
	int maior=0, n, i;

	scanf("%d", &n);
  int v[n+1];

	v[0] = 0;
	v[n+1] = 0;

	for(i = 1; i <= n; i++){
		scanf("%d", &v[i]);

		if (v[i] > v[i-1])
			v[i] = v[i-1] + 1;
	}

	for(i = n; i >= 1; i--){
		if (v[i] > v[i+1])
			v[i] = v[i+1] + 1;
	}

	for(i = 0; i <= n; i++){
		if (v[i] > maior)
      maior = v[i];
	}

	printf("%d\n", maior);
	return 0;
}
