#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> c(m);
  for(int i=0; i<m; i++) cin >> c[i];

  int o = 0;
  for(int i=0; i<n; i++){
    int a, b;
    cin >> a >> b;
    a--;
    if(c[a] >= b){
      o += b;
      c[a] -= b;
    }else{
      o += c[a];
      c[a] = 0;
    }
  }
  cout << o << endl;
}

