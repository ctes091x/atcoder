#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,q; cin >> n >> q;
  vector<int> cells(n+2);
  int num_of_sect=0;
  for(int i=0; i<q; i++){
    int query; cin >> query;
    if(cells[query]==0){
      cells[query]=1;
      if(cells[query-1]==0 && cells[query+1]==0){
        num_of_sect++;
      }else if(cells[query-1]==1 && cells[query+1]==1){
        num_of_sect--;
      }
    }else{
      cells[query]=0;
      if(cells[query-1]==0 && cells[query+1]==0){
        num_of_sect--;
      }else if(cells[query-1]==1 && cells[query+1]==1){
        num_of_sect++;
      }
    }
    cout << num_of_sect << endl;
  }
}