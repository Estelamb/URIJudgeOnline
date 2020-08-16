#include <iostream>

using namespace std;

int main(){
    // n - pessoas alistas
    // nome - nome e r - raça
    int n, i, anoes = 0, elfos = 0, humanos = 0, magos = 0, hobbits = 0;
    string nome;
    char r;

    cin >> n;

    for(i=0; i<n; i++){
        cin >> nome >> r;

        if(r == 'A') anoes++;
        else if(r == 'E') elfos++;
        else if(r == 'H') humanos++;
        else if(r == 'M') magos++;
        else if(r == 'X') hobbits++;
    }

    cout << hobbits << " Hobbit(s)" << endl;
    cout << humanos << " Humano(s)" << endl;
    cout << elfos << " Elfo(s)" << endl;
    cout << anoes << " Anao(s)" << endl;
    cout << magos << " Mago(s)" << endl;
}