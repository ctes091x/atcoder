#include <bits/stdc++.h>
using namespace std;

int main(){
  int s,a,b,x;
  cin >> s >> a >> b >> x;
  int ret=0;
  ret += (x / (a + b)) * a * s;
  ret += min((x % (a + b)) * s, a*s);
  cout << ret << endl;
}

