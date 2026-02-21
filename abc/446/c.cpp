#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve(){
  int n, d;
  cin >> n >> d;
  vector<int> a;
  for(int i=0; i<n; i++){
    int tmp; cin >> tmp; a.push_back(tmp);
  }
  vector<int> b;
  for(int i=0; i<n; i++){
    int tmp; cin >> tmp; b.push_back(tmp);
  }
  // cout << "Input OK" << endl;

  queue<pair<int, int>> table;
  for(int i=0; i<n; i++){
    // cout << "Day " << i << endl;
    // morning
    // cout << "Morning" << endl;
    table.push(make_pair(i, a[i]));
    // noon
    // cout << "Noon" << endl;
    if(table.front().second - b[i] <= 0){
      int needed = b[i] - table.front().second;
      table.pop();
      table.front().second -= needed;
    }else{
      table.front().second -= b[i];
    }
    // evening
    // cout << "Evening" << endl;
    if(table.size() > 0) while(i - table.front().first >= d) table.pop();
    // cout << "Good night" << endl;
  }

  int output = 0;
  while(table.size() > 0){
    output += table.front().second;
    table.pop();
  }
  cout << output << endl;
}

int main(){
  int t; cin >> t;
  for(int i=0; i<t; i++) solve();
}

