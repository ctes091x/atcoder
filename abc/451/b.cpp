#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  vector<int> ty(m, 0);
  vector<int> ny(m, 0);
  for(int i=0; i<n; i++){
    int a, b;
    cin >> a >> b;
    ty[a-1]++;
    ny[b-1]++;
  }
  for(int i=0; i<m; i++) cout << ny[i] - ty[i] << endl;
}

