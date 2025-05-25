#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int output=1;
  for(int i=1; i<S.size(); i+=2){
    if(S.at(i)=='+'){
      output++;
    }else{
      output--;
    }
  }
  cout << output << endl;
}
