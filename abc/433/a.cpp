#include <bits/stdc++.h>
using namespace std;

int main(){
  int x, y, z;
  cin >> x >> y >> z;
  if(x<=y){
    cout << "No" << endl;
    return 0;
  }
  for(int i=0; i<100000; i++){
    if(x==z*y) {
      cout << "Yes" << endl;
      return 0;
    }
    x++; y++;
  }
  cout << "No" << endl;
}

