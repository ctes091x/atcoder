#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  int cond=0;
  for(int i=1; i<=6; i++){
    for(int j=1; j<=6; j++){
      if(((i+j)>=x) || (abs(i-j)>=y)){
        cond++;
      }
    }
  }
  long double cond_r=cond;
  cout << fixed << setprecision(30) << cond_r/36.0 <<endl;
}