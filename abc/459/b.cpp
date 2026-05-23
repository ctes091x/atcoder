#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<string> s(n);
  for(int i=0; i<n; i++) cin >> s[i];
  for(int i=0; i<n; i++){
    if(s[i][0] == 's' || s[i][0] == 'v' || s[i][0] >= 'y') s[i][0]-=2;
    cout << ((int)(s[i][0]-'a')) / 3 + 2;
  }
  cout << endl;
}

