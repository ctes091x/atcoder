#include <bits/stdc++.h>
using namespace std;

bool isdivider(int b, int a){
  return((a / b) * b == a);
}

int main(){
  int n; cin >> n;
  vector<int> a = {0};
  for(int i=1; i<=n; i++){
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
  }

  int count = 0;
  for(int r=1; r<=n; r++){
    for(int l=1; l<=r; l++){
      int s=0;
      for(int i=l; i<=r; i++) s+=a[i];
      bool flag=false;
      for(int i=l; i<=r; i++) if(isdivider(a[i], s)) flag=true;
      if(flag) continue;
      count++;
    }
  }
  cout << count << endl;
}

