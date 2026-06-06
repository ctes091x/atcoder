#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll n, k, m;
  cin >> n >> k >> m;
  vector<pair<ll, ll>> jewels(n);
  for(ll i=0; i<n; i++) cin >> jewels[i].first >> jewels[i].second;

  sort(jewels.begin(), jewels.end(), [](auto &left, auto &right) {
    return left.second < right.second;
  });

  vector<bool> taken(n);
  for(ll i=0; i<n; i++) taken[i] = false;

  set<ll> colors;
  ll num = 0;
  ll cost = 0;

  for(ll i=n-1; colors.size() < m; i--){
    if( colors.find(jewels[i].first) == colors.end() ){
      colors.insert(jewels[i].first);
      taken[i] = true;
      num++;
      cost += jewels[i].second;
    }
  }

  for(ll i=n-1; num < k; i--){
    if(!taken[i]){
      taken[i] = true;
      num++;
      cost += jewels[i].second;
    }
  }

  cout << cost << endl;
}
