#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; string s;
  cin >> n >> s;
  if(n<3){
    cout << "No" << endl;
    return 0;
  }
  if(s.substr(s.length()-3)=="tea"){
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
}
