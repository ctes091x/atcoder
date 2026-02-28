
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  vector<int> table(26, 0);
  for(int i=0; i<s.length(); i++) table[s[i] - 'a']++;
  int nmax = 0;
  for(int i=0; i<26; i++) nmax = max(nmax, table[i]);
  for(int i=0; i<s.length(); i++) if(table[s[i] - 'a'] != nmax) cout << s[i];
  cout << endl;
}

