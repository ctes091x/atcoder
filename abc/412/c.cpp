#include <bits/stdc++.h>
using namespace std;

int main() {
  // int t; cin >> t;
  // for(int time=0; time<t; time++){
  int n; cin >> n;
  cout << n << endl;
  vector<int> dominos(n);
  for(int i=0; i<n; i++){
    cin >> dominos[i];
    cout << dominos[i] << " ";
  }
  cout << endl;
  sort(dominos.begin(), dominos.end());
  
  int dominoCount=1;
  int curPos=1; int prevPos=0;
  while(prevPos<n-1){
    cout << "outer loop " << prevPos << endl;
    while(dominos[prevPos]*2<dominos[curPos]){
      cout << dominos[curPos] << "<" << dominos[prevPos]*2 << endl;
      curPos++;
    }
    // curPos--;
    prevPos=curPos; curPos++;
    dominoCount++;
  }
  cout << dominoCount << endl;
  // }
}