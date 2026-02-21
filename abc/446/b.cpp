#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  int n, m;
  cin >> n >> m;
  vector<bool> drinks(m, true);
  for(int i=0; i<n; i++){
    int l;
    cin >> l;
    bool drinkable = false;
    vector<int> orders;
    for(int j=0; j<l; j++){
      int tmp; cin >> tmp; orders.push_back(tmp-1);
    }
    for(int j=0; j<l; j++){
      int x=orders[j];
      if(drinks[x] == true){
        cout << x+1 << endl;
        drinkable = true;
        drinks[x] = false;
        break;
      }
      if(drinkable) break;
    }
    if(!drinkable) cout << 0 << endl;
  }
}

