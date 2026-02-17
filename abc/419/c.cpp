#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int xmin, xmax, ymin, ymax;
  cin >> xmin >> ymin;
  xmax = xmin; ymax = ymin;
  for(int i=1; i<n; i++){
    int x, y;
    cin >> x >> y;
    if(xmin > x) xmin = x;
    if(ymin > y) ymin = y;
    if(xmax < x) xmax = x;
    if(ymax < y) ymax = y;
  }
  cout << max((xmax-xmin+1) / 2, (ymax-ymin+1) / 2) << endl;
}

