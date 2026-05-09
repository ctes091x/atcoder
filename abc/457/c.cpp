#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll n, k; cin >> n >> k;
  vector<vector<ll>> a(n);
  for(ll i=0; i<n; i++){
    ll l; cin >> l;
    for(ll j=0; j<l; j++){
      ll tmp; cin >> tmp; a[i].push_back(tmp);
    }
  }

  vector<ll> c(n);
  for(ll i=0; i<n; i++) cin >> c[i];

  // n番目の数列の...
  k--;
  ll nth = 0;
  for(ll i=0; i<n; i++){
    if((k >= c[i] * a[i].size())){
      // cout << "[DEBUG] " << c[i] << " * " << a[i].size() << endl;
      // cout << "[DEBUG] " << k - (a[i].size() * c[i])  << " should be larger than 0" << endl;
      // cout << "[DEBUG] k = " << k << endl;
      k -= (c[i] * a[i].size());
      // cout << "[DEBUG] k = " << k << endl;
    }else{
      nth = i;
      break;
    }
  }
  // cout << "[DEBUG] " << nth << " " << k << endl;
  
  cout << a[nth][k % a[nth].size()] << endl;
  
}
