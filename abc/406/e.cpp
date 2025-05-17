#include <bits/stdc++.h>
using namespace std;

// a(0) = 0, a(n) = a(n - 2^floor(log_2(n))) + 1
// int popcount(int n){
//   if(n==0) return 0;
//   return popcount(n-2*floor(log2(n)))+1;
// }


int main() {
  int T;
  cin >> T;
  int table[1200000000000000000];
  long int already = 0;
  table[0]=0;
  for(int i=1; i<T; i++){
    long long int N; int K;
    cin >> N >> K;
    int output=0;
    if(already<N){
      for(int j=already; j<N; j++){
        table[i]=__popcount(i);
      }
    }
    for(int j=1; j<N; j++){
      if(table[i]==K){
        output+=K;
        output%=998244353;
      }
    }
    cout << output << endl;
  }
}
