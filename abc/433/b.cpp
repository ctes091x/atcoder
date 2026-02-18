#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a;
  for(int i=0; i<n; i++){
    int tmp; cin >> tmp; a.push_back(tmp);
  }
  for(int i=0; i<n; i++){
    bool found = false;
    for(int j=i-1; j>=0; j--){
      if(a[j] > a[i]){
        cout << j+1 << endl;
        found = true;
        break;
      }
    }
    if(!found) cout << -1 << endl;
  }
}

