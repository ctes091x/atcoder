#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<long long int>> table(101, vector<long long int>(2));
  for(int i=0; i<n; i++){
    int spices, s;
    cin >> spices >> s;
    table[spices][0]+=1;
    table[spices][1]+=s;
  }
  for(int i=1; i<=m; i++){
    cout << fixed << setprecision(10) << 1.0 * table[i][1] / table[i][0] << endl;
  }
}
