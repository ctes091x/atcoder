#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q;
  cin >> n >> q;
  vector<int> x;
  for(int i=0; i<q; i++){
    int tmp;
    cin >> tmp;
    x.push_back(tmp - 1);
  }
  vector<int> box(n, 0);
  for(int i=0; i<q; i++){
    if(x[i] != -1){
      box[x[i]]++;
      cout << x[i] + 1 << " ";
    }else{
      int idx=0;
      for(int i=0; i<n; i++){
        if(box[idx]>box[i]) idx = i;
      }
      box[idx]++;
      cout << idx + 1 << " ";
    }
  }
  cout << endl;
}

