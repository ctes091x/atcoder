#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, q; cin >> n >> q;
  vector<pair<int, int>> piles(n + 1, pair<int, int>(0, 0));

  // 状態更新 カードつむ
  for(int i=0; i<q; i++){
    int c, p; cin >> c >> p;
    piles[piles[c].second].first = 0;
    piles[c].second = p;
    piles[p].first = c;
  }

  // cout << "input ok" << endl;

  // 山を数える
  for(int i=1; i<=n; i++){
    if(piles[i].second == 0){
      // cout << "top card found" << endl;
      int count = 1;
      int index = i;
      while(piles[index].first != 0){
        count++;
        index = piles[index].first; 
      }
      // cout << "bottom card found" << endl;
      cout << count << " ";
    }else{
      // cout << "no card" << endl;
      cout << 0 << " ";
    }
  }
  cout << endl;
}

