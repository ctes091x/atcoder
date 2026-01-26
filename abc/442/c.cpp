#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<long long int> table(n, n-1);
  for(int i=0; i<m; i++){
    int tmp1;
    cin >> tmp1;
    table[tmp1-1]--;
    int tmp2;
    cin >> tmp2;
    table[tmp2-1]--;
  }
  for(int i=0; i<n; i++){
    if(table[i] < 3){
      cout << 0 << " ";
    } else {
      cout << (table[i] * (table[i]-1) * (table[i]-2)) / 6 << " ";
    }
  }
  cout << endl;
}

