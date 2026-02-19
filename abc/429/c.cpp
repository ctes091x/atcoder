#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll n; cin >> n;
  vector<ll> a;
  for(ll i=0; i<n; i++) {
    ll tmp; cin >> tmp; a.push_back(tmp);
  }
  sort(a.begin(), a.end());
  vector<ll> groups;
  groups.push_back(1);
  for(ll i=1; i<n; i++){
    if(a[i] == a[i-1]){
      groups.back()++;
    }else{
      groups.push_back(1);
    }
  }

  ll count=0;
  for(ll i=0; i<groups.size(); i++){
    count += ((groups[i]*(groups[i] - 1)) / 2) * (n - groups[i]);
  }
  cout << count << endl;
}

