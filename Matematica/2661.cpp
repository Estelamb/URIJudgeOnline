// Exercicio 2661, URI, Despojados
// Para resolver esse exercicio foi utilizado de fatores primos

#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main(){
    unsigned long long numero;
    unsigned long long fatores = 0, limite = 2;

    scanf("%llu", &numero);

    // Um numero N e divisor de S se e somente se em sua fatoraçao
    // nao existe um numero primo que nao esta presente nos fatores de S
    // e os expoentes dos fatores de N sao todos menores ou iguais ao expoente
    // do fator correspondente de S

    while (limite * limite <= numero){
		if (numero % limite == 0){
			++fatores;
			while (numero % limite == 0)
				numero /= limite;
		}

		++limite;
	}

	if (numero != 1) ++fatores;

	printf("%llu\n", (1l << fatores) - fatores - 1);
}