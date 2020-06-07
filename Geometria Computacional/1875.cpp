#include <iostream>

using namespace std;

int main(){
  int casos, i, gols, j;

  cin >> casos;

  for(i=0; i<casos; i++){
    cin >> gols;

    int blue = 0, green = 0, red = 0;
    for(j=0; j<gols; j++){
      char m, s;

      cin >> m >> s;

      // Pontos time Blue
      if(m == 'B' && s == 'G') blue++;
      else if(m == 'B' && s == 'R') blue += 2;

      // Pontos time Green
      if(m == 'G' && s == 'B') green += 2;
      else if(m == 'G' && s == 'R') green++;

      // Pontos time Red
      if(m == 'R' && s == 'G') red += 2;
      else if(m == 'R' && s == 'B') red++;
    }

    // Verificando o Ganhador
    // Trempate
    if(blue == green && green == red) cout << "trempate" << endl;
    // Apenas um time vencer
    else if(blue > green && blue > red) cout << "blue" << endl;
    else if(green > blue && green > red) cout << "green" << endl;
    else if(red > blue && red > green) cout << "red" << endl;
    // Empate
    else if(blue == green || green == red || red == blue) cout << "empate" << endl;
  }
  return 0;
}
