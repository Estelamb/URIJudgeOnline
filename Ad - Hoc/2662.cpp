// Exercicio 2662, URI, Escala Musical
// Para a solução foi necessario apenas usar do mapeamento das
// sequencias de toms possiveis

#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector <string> note = {"do", "do#", "re", "re#", "mi", "fa", "fa#", "sol", "sol#", "la", "la#", "si"};
    vector <vector<string>> tom(12, vector<string>(7, ""));
    map <int, string> piano;

    // gerando um mapeamento de valores e notas
    int j = 0;

    for (int i = 1; i <= 61; i++) {
        if(j >= 12)
            j = 0;
        piano.insert({i, note[j++]});
    }

    // a partir do mapeamento verificamos em qual tom
    // cada sequencia se encaixa
    int x = 0;
    for (int i = 1; i <= 12; i++) {
        tom[i - 1][0] = piano[i+x];
        x+=2;
        tom[i - 1][1] = piano[i+x];
        x+=2;
        tom[i - 1][2] = piano[i+x];
        x+=1;
        tom[i - 1][3] = piano[i+x];
        x+=2;
        tom[i - 1][4] = piano[i+x];
        x+=2;
        tom[i - 1][5] = piano[i+x];
        x+=2;
        tom[i - 1][6] = piano[i+x];
        x = 0;
    }

    // iniciando a execução de entradas e do codigo
    int n, v;

    cin >> n;

    vector <int> keys(n, 0);

    for (int i = 0; i < n; i++) {
        cin >> keys[i];
    }

    // com base no vetor de entradas iremos procurar o tom
    // que corresponde a sequencia
    int on = 0;

    vector <string> many_tom;

    for (int i = 0; i < 12; i++) {
        int flag = 0;
        for (int j = 0; j < n; j++) {
            // retorna true caso encontre uma sequencia igual ao dado no vetor de entrada
            if(find(tom[i].begin(), tom[i].end(), piano[keys[j]]) == tom[i].end()) {
                flag = 1;
                break;
            }
        }

        if(!flag) {
            on++;
            many_tom.push_back(tom[i][0]);
        }
    }

    if(on == 0) cout << "desafinado\n";
    else {
        cout << many_tom[0] << endl;
    }

    return 0;
}