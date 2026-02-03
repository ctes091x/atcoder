#include <bits/stdc++.h>
using namespace std;

int main(){
  int i, j; cin >> i >> j;
  int ret = (i+j)%12;
  if(ret==0){cout << 12 << endl;}else{cout << ret<< endl;}

}