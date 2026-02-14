#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<string> s;
  int maxlen = 0;
  for(int i=0; i<n; i++){
    string tmp;
    cin >> tmp;
    if(tmp.length() > maxlen) maxlen = tmp.length();
    s.push_back(tmp);
  }
  for(int i=0; i<n; i++){
    for(int j=0; j < (maxlen-s[i].length()) / 2; j++) cout << ".";
    cout << s[i];
    for(int j=0; j < (maxlen-s[i].length()) / 2; j++) cout << ".";
    cout << endl;
  }
}

