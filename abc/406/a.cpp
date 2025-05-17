#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if(60*a+b<60*c+d){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
}