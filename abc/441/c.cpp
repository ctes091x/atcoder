#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int n, k, x;
  cin >> n >> k >> x;
  vector<long long int> a;
  for(long long int i=0; i<n; i++){
    long long int tmp; cin >> tmp;
    a.push_back(tmp);
  }
  sort(a.begin(), a.end());

  long long int minsake = 0;
  for(long long int i=0; i<k; i++) minsake += a[i];
  
  if(minsake < x){
    cout << -1 << endl;
    return 0;
  }
  
  int drinkable = minsake;
  int canmiss = 0;

  for(long long int i=1; i<=k; i++){
    drinkable -= a[k-i];
    if(drinkable < x){
      canmiss = i-1;
      break;
    }
  }

  cout << n - canmiss << endl;
}
