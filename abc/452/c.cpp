#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0; i<n; i++) cin >> a[i] >> b[i];

  for(int i=0; i<n; i++) b[i]--;
  
  int m; cin >> m;
  vector<string> s(m);
  for(int i=0; i<m; i++) cin >> s[i];

  vector<set<pair<char,int>>> table(10);
  for(int j=0; j<m; j++){
    for(int i=0; i<s[j].length(); i++){
      table[i].insert(make_pair(s[j][i], s[j].length()));
    }
  }

  for(int j=0; j<m; j++){
    bool flag = true;
    if(s[j].length() == n){
      for(int i=0; i<n; i++){
        if(table[b[i]].count(make_pair(s[j][i], a[i])) == 0){
          flag = false;
          break;
        }
      }
    }else{
      flag = false;
    }
    cout << (flag ? "Yes" : "No") << endl;
  }

  // for(int i=0; i<m; i++){
  //   bool flag = true;
  //   if(s[i].length() == n){
  //     for(int j=0; j<n; j++) if(table[b[i]].count(make_pair(s[i][j], a[i])) == 0){flag=false; break;}
  //   }else{
  //    flag = false;
  //   }
  //   cout << (flag ? "Yes" : "No") << endl;
  // }

  // vector<vector<bool>> table(m, vector<bool>(n, false));
  // for(int i=0; i<m; i++){
  //   for(int j=0; j<n; j++){
  //     if(s[m].length() == )
  //   }
  // }
}
