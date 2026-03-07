#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q; cin >> n >> q;
  vector<int> a(n);
  for(int i=0; i<n; i++) cin >> a[i];
  vector<int> as = a;
  sort(as.begin(), as.end());

  for(int i=0; i<q; i++){
    int k; cin >> k;
    vector<int> ba(k);
    for(int j=0; j<k; j++){
      int b; cin >> b;
      ba[j] = a[b - 1];
    }
    sort(ba.begin(), ba.end());
    
    int offset = 0;
    for(int j=0; j<k; j++){
      if(ba[j] == as[offset]) offset++;
    }
    cout << as[offset] << endl;
  }
}

