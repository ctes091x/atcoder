#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll q; cin >> q;

  multiset<ll> trees;
  for(ll i=0; i<q; i++){
    ll query; cin >> query;
    if(query == 1){
      ll t; cin >> t;
      trees.insert(t);
      cout << trees.size() << endl;
    }else{
      ll h; cin >> h;
      while(trees.size() > 0 && *trees.begin() <= h) trees.erase(*trees.begin());
      cout << trees.size() << endl;
    }
  }
}

