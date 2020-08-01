#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	char str[1050], compara, resultado;
	int c;

	fgets( str, 1050, stdin );

	do{
        // Deixando todas as letras minusculas para fazer comparações
		for (c=0; c < strlen(str); c++) str[c] = tolower(str[c]);

        // o char 'compara' tem a inicial que compara com os demais
        // o char 'resultado' contem a saida do problema, 'Y' se é tautograma
        // e 'N' se não é 
		compara = str[0];
		resultado = 'Y';

        // verificando se todas as iniciais são iguais
		for (c=0; c < strlen(str); c++){
			if (str[c] == ' '){
				if(compara != str[c+1]){
					resultado = 'N';
				}

				else{
					if (resultado != 'N')
						resultado = 'Y';
				}

			}
		}

	printf("%c\n", resultado);
	fgets( str, 1050, stdin );
	
    } while (str[0] != '*' || str[0] == ' ' || str[c] == '	' || str[c] == '  ');

	return 0;
}