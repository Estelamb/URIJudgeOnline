#include <iostream>
#include <math.h>

using namespace std;

int main(){
    double d, vf, vg;

    while(cin >> d >> vf >> vg){

        double dist = sqrt(144 + d * d);
        double tf = 12/vf;
        double tg = dist/vg;

        if(tg<=tf) cout << "S" << endl;
        else cout << "N" << endl;
    }
    return 0;
}