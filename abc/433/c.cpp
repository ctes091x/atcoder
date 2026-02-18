#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int l = s.length();
  vector<pair<char, int>> rle;
  rle.push_back(make_pair(s[0], 1));
  for(int i=1; i<l; i++){
    if(s[i-1] == s[i]){
      rle.back().second++;
    }else{
      rle.push_back(make_pair(s[i], 1));
    }
  }

  int count = 0;

  for(int i=1; i<rle.size(); i++){
    if(rle[i].first == rle[i-1].first+1){
      count += min(rle[i].second, rle[i-1].second);
    }
  }
  cout << count << endl;
}

