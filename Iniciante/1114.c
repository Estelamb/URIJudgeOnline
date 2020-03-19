#include <stdio.h>
#include <string.h>

int main() {
  char senha[5], tentativa[5];
  strcpy(senha, "2002");

  while(1){
    scanf("%s", tentativa);

    if(strcmp(tentativa, senha) == 0){
      printf("Acesso Permitido\n");
      return 0;
    } else{
      printf("Senha Invalida\n");
    }
  }
}
