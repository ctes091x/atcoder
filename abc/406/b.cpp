#include <bits/stdc++.h>
using namespace std;

long int powi(int a, int b){
  int out=1;
  for(int i=0; i<b; i++) out *= a;
  return out;
}

int main() {
  unsigned long long int d=1;
  int n, k;
  cin >> n >> k;
  unsigned long long int a;
  for(int i=0; i<n; i++){
    cin >> a;
    d*=a;
    if(d>=powi(10, k)){
      d=1;
    }
  }
  cout << d << endl;
}