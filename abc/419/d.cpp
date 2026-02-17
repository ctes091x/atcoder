#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;

  vector<int> flag(n+1, 0);
  for(int i=0; i<m; i++){
    int l, r;
    cin >> l >> r;
    flag[l-1]++;
    flag[r]--;
  }
  flag[0] %= 2;
  for(int i=1; i<n; i++){
    flag[i] = (flag[i-1] + flag[i]) % 2;
  }
  for(int i=0; i<n; i++){
    cout << (flag[i]==0 ? s[i] : t[i]) ;
  }
  cout << endl;
}

