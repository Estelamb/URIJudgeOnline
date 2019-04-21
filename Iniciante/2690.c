#include <stdio.h>
#include <string.h>

int main()
{
   int senhas;
   char testes[100][100];
   int cont;
   int tam[100];
   int j,i;

   scanf("%d",&senhas);

   for(j=0;j<senhas;j++){
     scanf(" %[^\n]s",testes[j]);
     tam[j] = strlen(testes[j]);
   }


   for(j=0;j<senhas;j++){
          cont =0;
     for(i=0;i<tam[j];i++){
       if(testes[j][i]!=' '){
         cont++;
        // printf("%c\n",testes[j][i]);
        if(testes[j][i] == 'G'||testes[j][i] == 'Q'||testes[j][i] == 'a'||testes[j][i] == 'k'||testes[j][i] == 'u')
          printf("0");

        if(testes[j][i] == 'I'||testes[j][i] == 'S'||testes[j][i] == 'b'||testes[j][i] == 'l'||testes[j][i] == 'v')
          printf("1");

        if(testes[j][i] == 'E'|| testes[j][i] == 'O'||testes[j][i] == 'Y'||testes[j][i] == 'c'||testes[j][i] == 'm'||testes[j][i] == 'w')
          printf("2");

        if(testes[j][i] == 'F'||testes[j][i] == 'P'||testes[j][i] == 'Z'||testes[j][i] == 'd'||testes[j][i] == 'n'||testes[j][i] == 'x')
          printf("3");

        if(testes[j][i] == 'J'||testes[j][i] == 'T'||testes[j][i] == 'e'||testes[j][i] == 'y'||testes[j][i] == 'o')
          printf("4");

        if(testes[j][i] == 'D'||testes[j][i] == 'N'||testes[j][i] == 'X'||testes[j][i] == 'f'||testes[j][i] == 'p'||testes[j][i] == 'z')
          printf("5");

        if(testes[j][i] == 'A'||testes[j][i] == 'K'||testes[j][i] == 'U'||testes[j][i] == 'g'||testes[j][i] == 'q')
          printf("6");

        if(testes[j][i] == 'C'||testes[j][i] == 'M'||testes[j][i] == 'W'||testes[j][i] == 'h'||testes[j][i] == 'r')
          printf("7");

        if(testes[j][i] == 'B'||testes[j][i] == 'L'||testes[j][i] == 'V'||testes[j][i] == 'i'||testes[j][i] == 's')
          printf("8");

        if(testes[j][i] == 't'||testes[j][i] == 'j'||testes[j][i] == 'H'||testes[j][i] == 'R')
          printf("9");
        if (cont == 12)
            break;
       }
     }
    printf("\n");
   }
   return 0;
}
