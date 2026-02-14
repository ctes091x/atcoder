#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  int n; cin >> n;
  vector<ll> a;
  vector<ll> goal(n, 0);
  for(int i=0; i<n; i++){
    ll tmp;
    cin >> tmp;
    a.push_back(tmp-1);
  }
  goal[n-1] = n - 1;
  for(int i=n-2; i>=0; i--){
    if(a[i]>i){
      goal[i] = goal[a[i]];
    }else{
      goal[i] = i;
    }
  }
  
  for(int i=0; i<n; i++){
    cout << goal[i] + 1 << " ";
  }
  cout << endl;
}

