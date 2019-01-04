#include <stdio.h>

int main() {
  int Inter=0, Gremio=0, Total, Empate=0, x, y, op;

  while(scanf("%d %d", &x, &y) != EOF){
    if(x > y) Inter++;
    else if(x < y) Gremio++;
    else Empate++;

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &op);
    if(op == 2){
      Total = Inter + Gremio + Empate;
      printf("%d grenais\n", Total);
      printf("Inter:%d\n", Inter);
      printf("Gremio:%d\n", Gremio);
      printf("Empates:%d\n", Empate);

      if(Inter > Gremio) printf("Inter venceu mais\n");
      else if(Gremio > Inter) printf("Gremio venceu mais\n");
      else printf("Nao houve vencedor\n");
      return 0;
    }
  }
}
