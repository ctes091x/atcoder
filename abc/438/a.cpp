#include <bits/stdc++.h>
using namespace std;

int main(){
  int d, f;
  cin >> d >> f;
  int i=0;
  while(f + 7*i < d) i++;
  cout << ((f+7*i)%d == 0 ? 7 : (f+7*i)%d) << endl;
}
