#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  // bool awake=true;
  int lasttime=0;
  int now=0;
  for(int i=0; i<N; i++){
    lasttime=now;
    cin >> now;
    // cout << now << endl;
    // cout << "lasttime:" << lasttime << " now:" << now << " len:" << now-lasttime << endl; 
    if((now-lasttime) > S){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}