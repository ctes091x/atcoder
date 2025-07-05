#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<string> orig(n);
  vector<string> list;
  for(int i=0; i<n; i++){
    cin >> orig[i];
  }
  for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
      if(i==j){
        // cout<<"i==j"<<endl;
        continue;
      }
      string cadet=orig[i]+orig[j];
      // cout << i << "," << j << " " << cadet << " " << endl;
      bool contained=false;
      for(int k=0; k<list.size(); k++){
        if(cadet==list[k]){
          contained=true;
          break;
        }
      }
      if(contained) continue;
      list.push_back(cadet);
    }
  }
  cout << list.size() << endl;
}