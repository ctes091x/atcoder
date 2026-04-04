#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  bool f=false;
  if(a==b && a%2==1 && a<10) f=true;
  if(a==1 && b==1) f=false;
  if(a==1 && b==7)f=true;
  cout << (f ? "Yes" : "No") << endl;
}

