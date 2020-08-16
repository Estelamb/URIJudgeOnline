#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, g, ans, x, i;
    char c;

    // preencher vetor com 0, para assim termos valores usados
    // apenas nas posições recebidas na entrada
    vector<int>runas;
    for(i=0; i<200; i++) runas.push_back(0);

    cin >> n >> g;

    // Basta armazenar no vetor na posição do char indicado
    // o valor correspondente
    while(n--){
        cin >> c >> x;
        runas[c] = x;
    }

    ans = 0;
    cin >> x;

    // Dado as runas usadas, basta somar o valor encontrado
    // na posição indicada pelo char
    while(x--){
        cin >> c;
        ans += runas[c];
    }

    cout << ans << endl;

    if(ans >= g) cout <<  "You shall pass!" << endl;
    else cout << "My precioooous" << endl;
}