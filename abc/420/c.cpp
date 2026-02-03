#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int n, q; cin >> n >> q;
  vector<long long int> a(n);
  vector<long long int> b(n);
  for(long long int i=0; i<n; i++){
    cin >> a[i];
  }
  for(long long int i=0; i<n; i++){
    cin >> b[i];
  }
  long long int sum=0;
  for(long long int i=0; i<n; i++){
    sum+=(a[i]>b[i] ? b[i] : a[i]);
  }
  
  for(long long int i=0; i<q; i++){
    string c; cin >> c;
    long long int x, v; cin >> x >> v;x--;
    // cout << "ab: " << a[x] << " " << b[x] << endl;
    // cout << "v: " << v << endl;
    if(a[x]<b[x]){sum-=a[x];}else{sum-=b[x];}
    if(c=="A"){
      a[x]=v;
    }else{
      b[x]=v;
    }
    // cout << "ab: " << a[x] << " " << b[x] << endl;
    if(a[x]>b[x]) sum+=b[x]; else sum+=a[x];
    cout << sum << endl;
  }
}
