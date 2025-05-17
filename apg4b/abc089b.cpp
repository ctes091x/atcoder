#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  string c;
  while(N>0){
    cin >> c;
    if(c=="Y"){
      cout << "Four" << endl;
      return 0;
    }
    N-=1;
  }
  cout << "Three" << endl;
}