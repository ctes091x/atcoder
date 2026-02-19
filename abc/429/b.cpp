#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> a;
  int s=0;
  for(int i=0; i<n; i++){
    int tmp; cin >> tmp; a.push_back(tmp);
    s += tmp;
  }
  for(int i=0; i<n; i++){
    if(s - a[i] == m){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
}

