#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  queue <vector<unsigned long long>> seq;
  for(int i=0; i<n; i++){
    int qtype; cin >> qtype; 
    if(qtype==1){
      unsigned long long c,x; cin >> c >> x;
      // c個のx
      seq.push({c, x});
    }else{
      int k; cin >> k;
      unsigned long long output=0;
      while(k>0){
        if(seq.front()[0]>k){
          output+=k*seq.front()[1];
          seq.front()[0]-=k;
          k=0;
        }else{
          output+=seq.front()[0]*seq.front()[1];
          k-=seq.front()[0];
          seq.pop();
        }
      }
      cout << output << endl;
    }
  }
}
// seq.push_back({1, 2}); 
// cout << seq[0][0] << " " << seq[0][1] << endl;
