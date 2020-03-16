#include <iostream>
#include <string.h>

using namespace std;

int main(){
  char F[257];
  char aux[257];

  while(cin.getline(F, 257)){
    for(int i=0; i<strlen(F); i++){
      if(F[i] == '@' ) F[i] = 'a';
      else if(F[i] == '&') F[i] = 'e';
      else if(F[i] == '!') F[i] = 'i';
      else if(F[i] == '*') F[i] = 'o';
      else if(F[i] == '#') F[i] = 'u';
    }

    cout << F << endl;

    F[0] = '\0';
  }



  return 0;
}
