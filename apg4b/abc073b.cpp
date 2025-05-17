#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int l, r;
  int output=0;
  cin >> N;
  while(N>0){
    cin >> l >> r;
    output += r-l+1;
    N-=1;
  }
  cout << output << endl;
}
