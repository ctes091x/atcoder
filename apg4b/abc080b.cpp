#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int Nc = N;
  int sum=0;
  while(N>0){
    sum += N%10;
    N /= 10;
  }
  cout << ((Nc % sum==0)?"Yes":"No") << endl;
}
