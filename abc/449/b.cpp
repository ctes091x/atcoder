#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w, q; cin >> h >> w >> q;
  for(int i=0; i<q; i++){
    int t, u; cin >> t >> u;
    if(t == 1){
      h -= u;
      cout << u * w << endl;
    }else{
      w -= u;
      cout << h * u << endl;
    }
  }
}

