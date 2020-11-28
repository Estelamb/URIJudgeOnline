#include <stdio.h>
#include <math.h>

int main (){
	unsigned numeroA, numeroB;
	unsigned short casos, i, j;

	scanf("%hu", &casos);

	for(i=0; i<casos; i++){
		scanf("%u %u", &numeroA, &numeroB);

		printf("%.f\n", (floor(numeroB * log10(numeroA)) + 1));
	}
}
