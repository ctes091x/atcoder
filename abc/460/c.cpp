#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll n, m;
  cin >> n >> m;

  vector<ll> a(n);
  for(ll i=0; i<n; i++) cin >> a[i];
  vector<ll> b(m);
  for(ll i=0; i<m; i++) cin >> b[i];

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  
  bool canmake = true;
  ll ans = 0;
  ll ai = 0;
  ll bi = 0;

  // a[i] * 2 >= b[j]
  while(canmake){
    // cerr << "trying to use neta " << b[bi] << endl;
    // cerr << "current smallest shari is " << a[ai] << endl;
    while(! (a[ai] * 2 >= b[bi])){
      // 今のネタが乗らない小さいシャリは捨てる
      // cerr << "shari " << a[ai] << " can't afford neta " << b[bi] << endl;
      ai++;
      if(ai >= a.size()){
        canmake = false;
        break;
      }
    }

    if(canmake){
      // cerr << "shari " << a[ai] << " can afford neta " << b[bi] << endl;
      ans++; ai++; bi++;
      if(ai >= a.size() || bi >= b.size()){
        canmake = false;
        break;
      }
    }
  }

  cout << ans << endl;
}
