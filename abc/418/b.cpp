#include <bits/stdc++.h>
using namespace std;

int countT(string s){
  int ret=0;
  for(int i=0; i<s.length(); i++){
    if(s[i]=='t') ret++;
  }
  return ret;
}

int main(){
  string s; cin >> s;
  // vector<int> rle;
  // int h=0;
  // if(s[0]=='t'){
  //   rle.push_back(0);
  //   h=1;
  // }
  // while(true){
    
  // }
  double ret=0;
  for(int i=0; i<s.length()-3; i++){
    for(int j=i+2; j<s.length(); j++){
      cout << s.substr(i, j-i+1);
      int count=countT(s.substr(i, j-i+1));
      cout << " " << count << endl;
      double dens = (count-2) / ((j-i+1)-2);
      if(dens>ret) ret=dens;
    }
  }
  cout << ret << endl;
}
