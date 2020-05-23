#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
  char frase[400];
  int casos, i;

  scanf("%d", &casos);

  for(i=0; i<casos+1; i++){
    fgets(frase, 400, stdin);

    if(i > 0)
      cout << "I am Toorg!" << endl;
  }
  return 0;
}
