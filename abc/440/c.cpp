#include <bits/stdc++.h>
using namespace std;

// INCORRECT ANSWER;

void solve(){
  int n, w; cin >> n >> w;
  vector<long long int> c;
  c.push_back(0);
  for(int i=1; i<=n; i++){
    int tmp; cin >> tmp;
    c.push_back(c[i-1] + tmp);
  }
  
  long long int min_cost = c[n];

  for(int i=1; i<=2*w; i++){
    long long int cost=0;
    int bs = 1+i;
    int ws = 1+i+w;
    while(true){
      if(ws > n){
        break;
      }else{
        cost += (c[ws] - c[bs]);
      }
      bs += 2*w;
      ws += 2*w;
    }

    // if(min(cost, c[n] - cost) < min_cost){
    //   min_cost = min(cost, c[n] - cost);
    // }
    if(cost < min_cost) min_cost = min(cost, c[n] - cost);
  }

  cout << min_cost << endl;
}

int main(){
  //int t; cin >> t;
  //for(int i=0; i<t; i++) solve();
  while(true){
    solve();
  }
}
