#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int mmod(int a, int b){
  return (a % b + b) % b;
}

int main(){
  int n; cin >> n;
  vector<vector<int>> m(n, vector<int>(n));
  for(int i=0; i<n; i++) for(int j=0; j<n; j++) m[i][j] = -1;
  
  int r=0;
  int c=(n-1)/2;
  int k=1;
  m[0][(n-1)/2] = 1;

  for(int i=0; i<n*n-1; i++){
    if(m[mmod((r-1), n)][mmod((c-1), n)] == -1){
      m[mmod((r-1),n)][mmod((c-1),n)] = k+1;
      r = mmod((r-1),n);
      c = mmod((c-1),n);
      k = k+1;
    }else{
      m[mmod((r+1),n)][c] = k+1;
      r = mmod((r+1),n);
      c = c;
      k = k+1;
    }
  }

  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++) cout << m[i][n-j-1] << " ";
    cout << endl;
  }
  
}
