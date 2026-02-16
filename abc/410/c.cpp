#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q;
  cin >> n >> q;
  vector<int> a;
  for(int i=1; i<=n; i++) a.push_back(i);
  int offset = 0;
  for(int i=0; i<q; i++){
    int type; cin >> type;
    if(type==1){
      int p, x;
      cin >> p >> x;
      a[(p-1+offset)%a.size()] = x;
    }else if(type==2){
      int p; cin >> p;
      cout << a[(p-1+offset)%a.size()] << endl;
    }else{
      int k; cin >> k;
      offset = (offset + k) % a.size();
    }
  }
}

