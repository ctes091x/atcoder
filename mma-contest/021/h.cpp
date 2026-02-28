#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int nmod(int a, int b){
  return(((a % b) + b ) % b);
}

void solve(ll n){
  n++;
  while(true){
    if(n == 1){
      cout << "Bob" << endl;
      return;
    }
    if(n % 2 != 0){
      cout << "Alice" << endl;
      return;
    }else{
      n /= 2;
    }
  }
}

int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; i++){
    ll n; cin >> n;
    solve(n);
  }
}


