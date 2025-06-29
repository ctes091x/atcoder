#include <bits/stdc++.h>
using namespace std;

int main() {
  int output=0;
  int n; cin >> n;
  for(int i=0; i<n; i++){
    int a; int b;
    cin >> a >> b;
    if(b > a) output++;
  }
  cout << output << endl;
}