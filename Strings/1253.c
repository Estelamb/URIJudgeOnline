#include <stdio.h>
#include <string.h>

int main(){
  unsigned short teste, deslocamento;
  int i, j;

  scanf("%hd", &teste);

  for(i=0; i<teste; i++){
    char palavra[50], letra;

    scanf("%s", palavra);
    scanf("%hd", &deslocamento);

    for(j=0; j<strlen(palavra); j++){
      if(palavra[j] - deslocamento < 'A'){
        letra = '[' - (deslocamento - (palavra[j] - 'A'));
        printf("%c", letra);
      }

      else{
        letra = palavra[j] - deslocamento;
        printf("%c", letra);
      }
    }

    printf("\n");
  }
  return 0;
}
