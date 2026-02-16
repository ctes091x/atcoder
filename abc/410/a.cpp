#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin >> n;
  vector<int> a;
  for(int i=0; i<n; i++){
    int tmp; cin >> tmp; a.push_back(tmp);
  }
  cin >> k;
  int count=0;
  for(int i=0; i<n; i++){
    if(k<=a[i]) count++;
  }
  cout << count << endl;
}

