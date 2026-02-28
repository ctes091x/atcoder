#include <bits/stdc++.h>
using namespace std;

int nmod(int a, int b){
  return(((a % b) + b ) % b);
}

bool solve(int x, int n){
  bool flag = false;

  if(x<n) return false;
  
  string sx = to_string(x);
  string sn = to_string(n);
  
  if(x % n == 0) return true;

  for(int i=0; i <= sx.length() - sn.length(); i++) if(sx.substr(i, sn.length()) == sn) return true;
  return false;
}

int main(){
  int n, q;
  cin >> n >> q;
  for(int i=0; i<q; i++){
    int x; cin >> x;
    cout << (solve(x, n) ? "Yes" : "No") << endl;
  }
}


