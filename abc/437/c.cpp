#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
  ll n; cin >> n;
  vector<ll> w(n);
  vector<ll> p(n);
  for(ll i=0; i<n; i++){
    cin >> w[i] >> p[i];
  }

  ll sp = 0;
  for(ll i=0; i<n; i++){
    sp += p[i];
  }

  vector<ll> s(n);
  for(ll i=0; i<n; i++){
    s[i] = w[i] + p[i];
  }
  sort(s.begin(), s.end());
  
  ll ss = 0;
  for(ll i=0; i<n; i++){
    ss += s[i];
    if(ss > sp) {
      cout << i << endl;
      return;
    }
  }
  cout << n << endl;
}

int main(){
  int t; cin >> t;
  for(int i=0; i<t; i++) solve();
}
