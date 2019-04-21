#include <stdio.h>

int main() {
  int idade, idades=0;
  double soma=0.00;

  while(1){
    scanf("%d", &idade);

    if(idade >= 0){
      idades++;
      soma += idade;
    } else{
      soma = soma/idades;
      printf("%.2lf\n", soma);
      return 0;
    }
  }
}
