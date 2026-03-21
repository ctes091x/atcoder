#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q; cin >> n >> q;

  vector<int> computers(n+1, 1); computers[0] = 0;
  int oldest = 0;
  
  for(int i=0; i<q; i++){
    int x, y; cin >> x >> y;
    int ret = 0;
    for(int j=oldest; j<=x; j++){
      computers[y] += computers[j];
      ret += computers[j];
      computers[j] = 0;
      oldest++;
    }
    cout << ret << endl;
  }
}

