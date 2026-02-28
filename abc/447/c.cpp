#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, t;
  cin >> s >> t;

  vector<pair<char, int>> sr, tr;
  sr.push_back(make_pair(' ', 0));
  tr.push_back(make_pair(' ', 0));
  for(int i=0; i<s.length(); i++){
    if(s[i] != 'A'){
      sr.push_back(make_pair(s[i], 0));
    }else{
      sr[sr.size() - 1].second++;
    }
  }
  for(int i=0; i<t.length(); i++){
    if(t[i] != 'A'){
      tr.push_back(make_pair(t[i], 0));
    }else{
      tr[tr.size() - 1].second++;
    }
  }

  if(sr.size() != tr.size()) {
    cout << -1 << endl;
    return 0;
  }

  int output = 0;
  for(int i=0; i<sr.size(); i++){
    if(sr[i].first != tr[i].first){
      cout << -1 << endl;
      return 0;
    }
    output += abs(sr[i].second - tr[i].second);
  }
  cout << output << endl;
}

