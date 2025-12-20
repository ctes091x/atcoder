#include <bits/stdc++.h>
using namespace std;

int main(){
  int h,w,n;
  cin >> h >> w >> n;
  vector<vector<int>> a(h, vector<int>(w));
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      cin >> a[i][j];
      //cout << "a[" << i << "][" << j << "]=" << a[i][j];
    }
  }
  vector<int> b(n);
  for(int i=0; i<n; i++){
    cin >> b[i];
  }

  vector<int> result(h);
  for(int i=0; i<h; i++){
    for(int j=0; j<w; j++){
      for(int k=0; k<n; k++){
        if(a[i][j]==b[k]) result[i]++;
      }
    }
  }
  int maxval=0;
  for(int i=0; i<h; i++){
    if(result[i]>maxval) maxval=result[i];
  }
  cout << maxval << endl;
}
