#include <bits/stdc++.h>
using namespace std;

int main(){
  long long int n,k;
  cin >> n >> k;
  long long int a = (n-1)*n / 2;
  for(long long int i=n; true; i++){
    if((i*(i+1)) / 2 - a >= k){
      cout << i - n << endl;
      return 0;
    }
  }
}
