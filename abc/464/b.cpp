#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w;
  cin >> h >> w;
  vector<string> c(h);
  for(int i=0; i<h; i++) cin >> c[i];

  int t=h-1;
  int b=0;
  int l=w-1;
  int r=0;
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      if(c[i][j] == '#'){
        t = min(t, i);
        b = max(b, i);
        l = min(l, j);
        r = max(r, j);
      }
    }
  }

  for(int i=t; i<=b; i++){
    for(int j=l; j<=r; j++){
      cout << c[i][j];
    }
    cout << endl;
  }
}
