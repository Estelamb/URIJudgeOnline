#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  int N, L, i, j, k;
  char string[60];

  scanf("%d", &N);
  for(i=0; i<N; i++){
    scanf("%d", &L);
    int somatorio = 0;

    for(j=0; j<L; j++){
      scanf("%s", string);

      for(k=0; k<strlen(string); k++){
        if(string[k] == 'A')
           somatorio += (0+j+k);
        else if(string[k] == 'B')
           somatorio += (1+j+k);
        else if(string[k] == 'C')
          somatorio += (2+j+k);
        else if(string[k] == 'D')
          somatorio += (3+j+k);
        else if(string[k] == 'E')
          somatorio += (4+j+k);
        else if(string[k] == 'F')
          somatorio += (5+j+k);
        else if(string[k] == 'G')
          somatorio += (6+j+k);
        else if(string[k] == 'H')
          somatorio += (7+j+k);
        else if(string[k] == 'I')
           somatorio += (8+j+k);
        else if(string[k] == 'J')
          somatorio += (9+j+k);
        else if(string[k] == 'K')
           somatorio += (10+j+k);
        else if(string[k] == 'L')
          somatorio += (11+j+k);
        else if(string[k] == 'M')
          somatorio += (12+j+k);
        else if(string[k] == 'N')
          somatorio += (13+j+k);
        else if(string[k] == 'O')
          somatorio += (14+j+k);
        else if(string[k] == 'P')
          somatorio += (15+j+k);
        else if(string[k] == 'Q')
          somatorio += (16+j+k);
        else if(string[k] == 'R')
          somatorio += (17+j+k);
        else if(string[k] == 'S')
          somatorio += (18+j+k);
        else if(string[k] == 'T')
          somatorio += (19+j+k);
        else if(string[k] == 'U')
          somatorio += (20+j+k);
        else if(string[k] == 'V')
          somatorio += (21+j+k);
        else if(string[k] == 'W')
           somatorio += (22+j+k);
        else if(string[k] == 'X')
           somatorio += (23+j+k);
        else if(string[k] == 'Y')
          somatorio += (24+j+k);
        else if(string[k] == 'Z')
          somatorio += (25+j+k);
      }
    }
    printf("%d\n", somatorio);
  }
  return 0;
}
