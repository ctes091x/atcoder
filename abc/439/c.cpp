#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  int rn = ceil(sqrt(n));
  vector<int> table(100000000, 0);
  for(int i=1; i<=rn; i++){
    for(int j=i+1; j<=rn; j++){
      table[(i*i + j*j)]++;
    }
  }
  int count = 0;
  for(int i=1; i<=n; i++){
    if(table[i] == 1) count++;
  }
  cout << count << endl;
  if(count != 0){
    for(int i=1; i<=n; i++){
      if(table[i] == 1) cout << i << " ";
    }
  }
  cout << endl;
}
