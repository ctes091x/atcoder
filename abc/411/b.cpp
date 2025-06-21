#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<int> distance(n+1);
  // int d;
  distance[1]=0;
  for(int i=2; i<=n; i++){
    cin >> distance[i];
    // cout << distance[i] << endl;
  }
  // cout << "f" << endl;
  for(int i=2; i<=n; i++){
    distance[i]+=distance[i-1];
  }

  for(int i=1; i<=n; i++){
    // cout << "hello" << endl;
    for(int j=i+1; j<=n; j++){
      // cout << i << " " << j << endl;
      cout << distance[j]-distance[i] << " ";
    }
    cout << endl;
  }
}