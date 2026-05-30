#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll t; cin >> t;
  for(ll i=0; i<t; i++){
    ll x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    if( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) <= (r1+r2)*(r1+r2) && (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) >= (r1-r2)*(r1-r2)){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}
