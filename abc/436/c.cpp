#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  int n, m;
  cin >> n >> m;
  set<vector<int>> placed;
  int count = 0;
  for(int i=0; i<m; i++){
    int r, c;
    cin >> r >> c;
    if(
      (placed.find({r, c}) == placed.end()) &&
      (placed.find({r+1, c}) == placed.end()) &&
      (placed.find({r, c+1}) == placed.end()) &&
      (placed.find({r+1, c+1}) == placed.end())
    ){
      placed.insert({r, c});
      placed.insert({r+1, c});
      placed.insert({r, c+1});
      placed.insert({r+1, c+1});
      count++;
    }
  }
  cout << count << endl;
}
