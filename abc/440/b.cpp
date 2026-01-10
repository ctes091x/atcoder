#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<int> table;
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    table.push_back(tmp);
  }
  vector<int> table_sorted = table;
  sort(table_sorted.begin(), table_sorted.end());

  vector<int> horses;
  for(int j=0; j<3; j++){
    for(int i=0; i<n; i++){
      if(table[i]==table_sorted[j]){
        horses.push_back(i);
        break;
      }
    }
  }
  for(int i=0; i<3; i++) cout << horses[i]+1 << " ";
  cout << endl;
}
