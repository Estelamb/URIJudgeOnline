#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double n, x, y;

    cin >> n >> x >> y;

    cout << fixed << setprecision(2);
    cout << n/(x+y) << endl;
}