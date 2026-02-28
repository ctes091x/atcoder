#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, a, b;
  cin >> n >> a >> b;
  for(int i=0; i<n; i++){
    int p; cin >> p;
    if(p == 1){
      if(a == 0){
        cout << i+1 << endl;
        return 0;
      }
      a--;
    }else if(p == 2){
      if(b == 0){
        cout << i+1 << endl;
        return 0;
      }
      b--;
    }else{
      if(a == 0 || b == 0){
        cout << i+1 << endl;
        return 0;
      }
      a--; b--;
    }
  }
  cout << -1 << endl;
}


