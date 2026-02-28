#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int nmod(int a, int b){
  return(((a % b) + b ) % b);
}

bool solve(int x, int n){
  bool flag = false;

  if(x<n) return false;
  
  string sx = to_string(x);
  string sn = to_string(n);
  
  if(x % n == 0) return true;

  for(int i=0; i <= sx.length() - sn.length(); i++) if(sx.substr(i, sn.length()) == sn) return true;
  return false;
}

int main(){
  ll n, d;
  cin >> n >> d;

  map<ll, ll> headCandidate;
  map<ll, ll> bodyCandidate;
  map<ll, ll> tailCandidate;

  for(int i=0; i<n; i++){
    ll a; cin >> a;
    headCandidate[a] += 1;
    bodyCandidate[a] += headCandidate[a - d];
    tailCandidate[a] += bodyCandidate[a - d];
  }

  ll count = 0;
  for(const auto& [key, value] : tailCandidate){
    count += value;
  }
  cout << count << endl;
}


