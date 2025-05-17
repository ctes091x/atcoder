#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, output;
  cin >> a >> b;
  if((a+b)%2 == 0){
    cout << (a+b)/2 << endl;
  } else {
    cout << 1+(a+b)/2 << endl;
  }
}
