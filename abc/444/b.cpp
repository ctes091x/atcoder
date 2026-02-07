#include <bits/stdc++.h>
using namespace std;

int ipow(int a, int b){
  if(b<0) return 1;
  int p=1;
  for(int i=0; i<b; i++) p *= a;
  return p;
}

int dsum(int a){
  int s=0;
  for(int i=5; i>0; i--) s += (a % ipow(10,i) / ipow(10,i-1));
  return s;
}

int main(){
  int n, k; cin >> n >> k;
  int c=0;
  for(int i=1; i<=n; i++){
    if(dsum(i) == k) c++;
  }
  cout << c << endl;
}

