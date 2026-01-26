#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q; cin >> n >> q;

  vector<int> s = {0};
  for(int i=0; i<n; i++){
    int tmp; cin >> tmp;
    s.push_back(s.back() + tmp);
  }

  for(int i=0; i<q; i++){
    int query; cin >> query;
    if(query == 1){
      int x; cin >> x;

      int ax = s[x] - s[x-1];
      int ax1 = s[x+1] - s[x];

      s[x] = s[x-1] + ax1;
      s[x+1] = s[x-1] + ax1 + ax;
    }else{
      int l, r; cin >> l >> r;
      cout << s[r] - s[l-1] << endl;
    }
  }
}

