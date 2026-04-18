#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  vector<int> f(n);
  for(int i=0; i<n; i++) cin >> f[i];
  for(int i=0; i<n; i++) f[i]--;
  
  vector<bool> table(m, false);
  bool alldif = true;
  for(int i=0; i<n; i++){
    if(table[f[i]] == true) alldif = false;
    table[f[i]] = true;
  }
  
  cout << (alldif ? "Yes" : "No") << endl;

  for(int i=0; i<m; i++){
    if(table[i] == false){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}

