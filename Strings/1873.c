#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  char rajesh[20], sheldon[20];
  int casos, i;

  scanf("%d", &casos);

  for(i=0; i<casos; i++){
    scanf("%s %s", rajesh, sheldon);

    if(strcmp(rajesh, sheldon) == 0)
      printf("empate\n");

    else if(strcmp(rajesh, "pedra") == 0){
      if(strcmp(sheldon, "lagarto") == 0 || strcmp(sheldon, "tesoura") == 0)
        printf("rajesh\n");
      else
        printf("sheldon\n");

    }else if(strcmp(rajesh, "papel") == 0){
      if(strcmp(sheldon, "pedra") == 0 || strcmp(sheldon, "spock") == 0)
        printf("rajesh\n");
      else
        printf("sheldon\n");

    }else if(strcmp(rajesh, "tesoura") == 0){
      if(strcmp(sheldon, "lagarto") == 0 || strcmp(sheldon, "papel") == 0)
        printf("rajesh\n");
      else
        printf("sheldon\n");

    }else if(strcmp(rajesh, "spock") == 0){
      if(strcmp(sheldon, "tesoura") == 0 || strcmp(sheldon, "pedra") == 0)
        printf("rajesh\n");
      else
        printf("sheldon\n");

    } else if(strcmp(rajesh, "lagarto") == 0){
      if(strcmp(sheldon, "spock") == 0 || strcmp(sheldon, "papel") == 0)
        printf("rajesh\n");
      else
        printf("sheldon\n");
    }
  }
  return 0;
}
