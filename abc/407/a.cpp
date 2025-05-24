#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  cout << ((float(a)/float(b) - (a/b) > 0.5)?1+a/b:a/b) << endl;
}