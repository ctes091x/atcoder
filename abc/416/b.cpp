#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  s+='#';
  bool bright=false;
  int i=1;
  while(i<s.length()){
    if(s[i]=='#'){
      if(!bright && s[i-1]=='.'){
        s[i-1]='o';
      }
      i++;
      continue;
    }else if(s[i]=='o'){
      bright=true;
      i++;
      continue;
    }else if(s[i]=='.'){
      i++;
      continue;
    }
  }
  s.pop_back();
  cout << s << endl;
}
