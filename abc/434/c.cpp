#include <bits/stdc++.h>
using namespace std;

bool is_able(int t1, int l1, int u1, int t2, int l2, int u2){
  
}

void judge(){
  int n, h;
  cin >> n >> h;
  int t1, l1, u1;
  int t2, l2, u2;
  cin >> t1 >> l1 >> u1;
  for(int j=1; j<n; j++){
    cin >> t2 >> l2 >> u2;
    if(!is_able(t1, l1, u1, t2, l2, u2)){
      cout << "No" << endl;
      return;
    }
    t1=t2; l1=l2; u1=u2;
  }
  cout << "Yes" << endl;
  return;
}

int main(){
  int t;
  for(int i=0; i<n; i++){
    judge();
  }
}
