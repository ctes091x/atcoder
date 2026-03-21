#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<vector<int>> table(n, vector<int>(n, 0));
  for(int i=0; i<n; i++){
    for(int j=i+1; j<n; j++){ 
      cin >> table[i][j];
    }
  }

  
  for(int i=0; i<n-2; i++){
    for(int j=i+1; j<n-1; j++){
      for(int k=j+1; k<n; k++){
        if(table[i][k] > table[i][j] + table[j][k]){
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
}

