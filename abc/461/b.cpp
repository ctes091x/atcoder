#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a(n);
  vector<int> b(n);
  for(int i=0; i<n; i++) cin >> a[i];
  for(int i=0; i<n; i++) a[i]--;
  for(int i=0; i<n; i++) cin >> b[i];
  for(int i=0; i<n; i++) b[i]--;
  for(int i=0; i<n; i++){
    if(i != b[a[i]]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
