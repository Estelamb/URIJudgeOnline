#include <iostream>

using namespace std;

int main(){
  int n, t, v, total = 0, i;

  cin >> n;

  for(i=0; i<n; i++){
    cin >> t >> v;

    total += t*v;
  }

  cout << total << endl;
  return 0;
}
