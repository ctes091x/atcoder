#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, t;
  cin >> n >> t;
  int open=0;
  int close=0;
  int sum=0;

  if(n>0){
    int a;
    cin >> a;
    close = a;
    //cout << open << " " << close << " " << close - open << "sec" << endl;
    sum += close - open;
    //cout << "opened " << sum << "sec" << endl;
    open = close + 100;
  
    for(int i=1; i<n; i++){
      cin >> a;
      if(a < open) {
        //cout << a << " not opened" << endl;
        continue;
      }
      close = a;
      //cout << open << " " << close << " " << close - open << "sec" << endl;
      sum += close - open;
    //cout << "opened " << sum << "sec" << endl;
      open = close + 100;
    }
    sum += max(t - open, 0);
  }else{
    sum = t;
  }
  cout << sum << endl;
}
