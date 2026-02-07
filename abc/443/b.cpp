#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll n,k;
  cin >> n >> k;
  ll a = (n-1)*n / 2;
  for(ll i=n; ; ++i){
    if((i*(i+1)) / 2 - a >= k){
      cout << i - n << endl;
      return 0;
    }
  }
}
