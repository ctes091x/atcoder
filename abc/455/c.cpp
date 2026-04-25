#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll n, k; cin >> n >> k;
  
  map<ll, ll> mp;
  for(ll i=0; i<n; i++){
    ll tmp; cin >> tmp;
    if(!mp.count(tmp)) mp[tmp] = 0;
    mp[tmp]++;
  }

  // cout << "input ok" << endl;
  
  vector<ll> tbl;
  for(auto p : mp) tbl.push_back(p.first * p.second);
  sort(tbl.rbegin(), tbl.rend());

  // cout << "summarize and sort ok" << endl;

  ll ret = 0;
  for(ll i=tbl.size() - 1; i>=k; i--){
    ret += tbl[i];
  }
  cout << ret << endl;
}

