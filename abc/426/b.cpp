#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  if(s[0] != s[1] && s[1] == s[2]){
    cout << s[0] << endl;
    return 0;
  }
  for(int i=1; i<s.length() - 1; i++){
    if(s[i-1] != s[i] && s[i] != s[i+1]){
      cout << s[i] << endl;
      return 0;
    }
  }
  if(s[s.length() - 2] != s[s.length() - 1]){
    cout << s[s.length() - 1] << endl;
  }
}

