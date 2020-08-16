// URI, 1120, Rrvisão de Contrato

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    int n, temp;
    char d;
    string s;

    while(getline(cin, s)){
        if(s.compare("0 0") == 0) return 0;

        d = s[0];
        s.erase(0,2);
        temp = s.size();

        // removendo o digito que não iremos usar
        s.erase(remove(s.begin(), s.begin() + temp, d), s.end());

        // verificando se o numero é 0, se sim, então devemos diminuir
        // ate apenas uma posicao, para fazer a impressao
        while(s[0] == '0'){
            if(s.size() == 1) break;

            s.erase(0,1);
        }

        if(s.size() == 0) cout << 0 << endl;
        else cout << s << endl;
    }

    return 0;
}