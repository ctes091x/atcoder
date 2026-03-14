#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll n, l, r;
  string s;
  cin >> n >> l >> r >> s;
  vector<pair<queue<ll>, queue<ll>>> v(26);
  
  // cout << "input ok" << endl;

  ll count = 0;
  for(ll i=0; i<n; i++){
    // cout << i << ": " << s[i] << endl;

    v[s[i] - 'a'].first.push(i);
    
    while(v[s[i] - 'a'].first.size() != 0 && i - v[s[i] - 'a'].first.front() >= l){
      // cout << "getting further" << endl;
      v[s[i] - 'a'].second.push(v[s[i] - 'a'].first.front());
      v[s[i] - 'a'].first.pop();
    }
    
    while(v[s[i] - 'a'].second.size() != 0 && i - v[s[i] - 'a'].second.front() > r){
      // cout << "too far" << endl;
      v[s[i] - 'a'].second.pop();
    }

    // cout << v[s[i] - 'a'].first.size() << " " << v[s[i] - 'a'].second.size() << endl;
    
    count += v[s[i] - 'a'].second.size();
  }
  cout << count << endl;
}

