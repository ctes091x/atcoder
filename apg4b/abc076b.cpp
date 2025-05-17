#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K,v=1;
  cin >> N >> K;
  for(int i=0; i<N; i++){
    if(K<v){v+=K;}else{v*=2;}
  }
  cout << v << endl;
}