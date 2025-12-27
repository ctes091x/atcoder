#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  int ans=10000;
  for(int i=0; i<=(n-m); i++){
    int iter = 0;
    for(int j=0; j<m; j++){
      int diff = s[i+j]-t[j];
      int oper = (diff >= 0 ? diff : diff+10);
      // cout << "(s, t) == (" << s[i+j] << ", " << t[j] << "), (diff, oper) == (" << diff << ", "<< oper << ")" << endl;
      iter += oper;
    }
    if(iter < ans) ans = iter;
  }
  cout << ans << endl;
}
