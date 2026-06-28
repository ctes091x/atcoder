#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll n, m;
  cin >> n >> m;
  vector<vector<ll>> birds(n, vector<ll>(3));
  for(ll i=0; i<n; i++){
    cin >> birds[i][0] >> birds[i][1] >> birds[i][2];
    birds[i][0]--;
    birds[i][1]--;
    birds[i][2]--;
  }

  sort(birds.begin(), birds.end(), [] (const vector<ll> &a, const vector<ll> &b)
          {
              return a[1] < b[1];
          });

  // map<ll, ll> colors;
  vector<ll> colors(n, 0);
  ll numofcolors = 0;
  for(ll i=0; i<n; i++){
    if(colors[birds[i][0]] == 0) numofcolors++;
    colors[birds[i][0]]++;
  }

  ll b=0;
  for(ll i=0; i<m; i++){
    while(b < n && birds[b][1] <= i){
      if(colors[birds[b][2]] == 0) numofcolors++;
      colors[birds[b][2]]++;
      colors[birds[b][0]]--;
      if(colors[birds[b][0]] == 0) numofcolors--;
      b++;
    }

    cout << numofcolors << endl;
  }
}
