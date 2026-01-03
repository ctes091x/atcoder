#include <bits/stdc++.h>
using namespace std;

int nextHappy(int input){
  return pow(input/1000, 2) + pow(input%1000/100, 2) + pow(input%100/10, 2) + pow(input%10, 2);
}

int main(){
  int n;
  cin >> n;
  while(true){
    n = nextHappy(n);
    if(n<10) break;
  }
  cout << (n==1 ? "Yes" : "No") << endl;
}
