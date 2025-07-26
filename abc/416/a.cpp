#include <bits/stdc++.h>
using namespace std;

int main(){
  long int n, l, r;
  cin >> n >> l >> r;  
  string s; cin >> s;
  // if(l==r){
  //   // cout << s[l-1];
  //   if(s[l-1]!='o'){
  //     cout << "No" << endl; return 0;
  //   }else{
  //     cout << "Yes" << endl; return 0;
  //   }
  // }
  for(long int i=l-1; i<=r-1; i++){
    // cout << s[i];
    if(s[i]!='o'){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
