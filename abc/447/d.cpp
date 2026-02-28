#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int output = 0;
  int a = 0;
  int ab = 0;
  for(int i=0; i<s.length(); i++){
    if(s[i] == 'C'){
      if(ab != 0){
        ab--;
        output++;
      }
    }else if(s[i] == 'B'){
      if(a != 0){
        a--;
        ab++;
      }
    }else{
      a++;
    }
  }
  cout << output << endl;
}

