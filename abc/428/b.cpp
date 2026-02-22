#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,k;
  string s;
  cin >> n >> k >> s;
  map<string, int> tbl;
  for(int i=0; i<n-k+1; i++){
    if(tbl.count(s.substr(i, k)) == 0){
      tbl[s.substr(i, k)] = 1;
    }else{
      tbl[s.substr(i, k)] += 1;
    }
  }
  int maxcount = 0;
  for(const auto& [str, count] : tbl){
    maxcount = max(maxcount, count);
  }
  cout << maxcount << endl;

  vector<string> rankers;
  for(const auto& [str, count] : tbl){
    if(count == maxcount){
      rankers.push_back(str);
    }
  }
  sort(rankers.begin(), rankers.end());
  for(int i=0; i<rankers.size(); i++){
    cout << rankers[i] << " ";
  }
  cout << endl;
}

