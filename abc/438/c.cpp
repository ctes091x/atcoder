#include <bits/stdc++.h>
using namespace std;

int main(){
  int n; cin >> n;
  vector<int> a;
  for(int i=0; i<n; i++){
    int tmp; cin >> tmp; a.push_back(tmp);
    if(a.size() >= 4){
      if(a[a.size() - 1] == a[a.size() - 2] && a[a.size() - 2] == a[a.size() - 3] && a[a.size() - 3] == a[a.size() - 4]){
        a.pop_back();
        a.pop_back();
        a.pop_back();
        a.pop_back();
      }
    }
  }
  cout << a.size() << endl;
}
