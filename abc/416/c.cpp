#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k, x;
  cin >> n >> k >> x;
  vector<string> s;
  sort(s.begin(), s.end());
  for(i=0; i<x; i++){
    next_permutation(s.begin(), s.end());
  }
  cout << s << endl;
}