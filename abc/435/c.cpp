#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a;
  for(int i=0; i<n; i++){
    int tmp; cin >> tmp;
    a.push_back(tmp);
  }
  int fall=0;
  for(int i=0; i<n; i++){
    if(i<=fall) fall = max(fall, i + a[i] - 1);
  }
  cout << min(fall + 1, n) << endl;
}

