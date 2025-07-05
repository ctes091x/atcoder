#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  int capa; cin >> capa;
  int sum=0;
  for(int i=0; i<n; i++){
    int size; cin >> size;
    sum+=size;
    if(sum>capa){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}