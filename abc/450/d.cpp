#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll n, k; cin >> n >> k;
  vector<ll> a(n);
  for(ll i=0; i<n; i++){
    cin >> a[i];
    a[i] %= k;
    // if(a[i] < k/2) a[i] += k;
  }
  sort(a.begin(), a.end());
  for(ll i=0; i<n; i++){
    a.push_back(a[i] + k);
  }

  ll ret = a[n-1] - a[0];
  for(ll i=1; i<n; i++) ret = min(ret, a[n-1 + i] - a[i]);
  cout << ret << endl;
}

