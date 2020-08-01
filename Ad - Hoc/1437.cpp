#include <iostream>

using namespace std;

int main(){
    int num, lado, i;
    char c;

    while(cin >> num && num != 0){
        lado = 0;

        for(i=0; i<num; i++){
            cin >> c;

            if(c == 'D') lado = (lado+1)%4;
            else lado = (lado-1 < 0? 3:lado-1);
        }

        switch(lado){
            case 0:
                cout << "N" << endl;
                break;
            case 1:
                cout << "L" << endl;
                break;
            case 2:
                cout << "S" << endl;
                break;
            case 3:
                cout << "O" << endl;
                break;
        }
    }

    return 0;
}