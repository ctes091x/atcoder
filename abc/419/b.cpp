#include <bits/stdc++.h>
using namespace std;

int main(){
  int q;
  cin >> q;
  multiset<int> bag;
  for(int i=0; i<q; i++){
    int t; cin >> t;
    if(t==1){
      int x; cin >> x;
      bag.insert(x);
    }else{
      cout << *begin(bag) << endl;
      bag.erase(bag.find(*begin(bag)));
    }
  }
}

