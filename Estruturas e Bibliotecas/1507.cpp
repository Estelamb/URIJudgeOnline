// URI, 1507, Subsequências
// utilizando de um algoritmo simples de comparação
// podemos fazer uma busca pela substring na string
// padrão

#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    string seq, sub;
    int n, q, offset;
    bool found;
    int i, j;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> seq >> q;

        for(j=0; j<q; j++){
            cin >> sub;

            offset = 0;
            found = false;

            for(char c: seq){
                if(c == sub[offset] && ++offset == sub.length()){
                    found = true;
                    break;
                }
            }

            if(found) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }
    return 0;
}