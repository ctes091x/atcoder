#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a;
  for(int i=0; i<n; i++){
    int tmp; cin >> tmp; a.push_back(tmp);
  }
  map<int, int> lookup;
  lookup[a[n-1]] = 1;
  int maxlen = 1;
  for(int i=n-2; i>=0; i--){
    if(lookup.count(a[i] + 1) != 0){
      lookup[a[i]] = lookup.at(a[i] + 1) + 1;
      maxlen = max(maxlen, lookup.at(a[i] + 1) + 1);
    }else{
      lookup[a[i]] = 1;
    }
    // for(int j=i+1; j<n; j++){
    //   if(a[i] + 1 == a[j]){
    //     l[i] = l[j] + 1;
    //     maxlen = max(maxlen, l[i]);
    //     break;
    //   }
    // }
  }
  cout << maxlen << endl;
}

