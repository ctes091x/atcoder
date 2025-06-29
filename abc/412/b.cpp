#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;
  vector<int> containedInT(128);
  for(int i=0; i<t.length(); i++){
    containedInT[t[i]]++;
  }
  for(int i=1; i<s.length(); i++){
    if(s[i]<91){
      if(containedInT[s[i-1]]<1){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}