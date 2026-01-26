#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int dots = 0;
  for(int i=0; i<s.length(); i++){
    if(s[i] == 'i' || s[i] == 'j') dots++;
  }
  cout << dots << endl;
}

