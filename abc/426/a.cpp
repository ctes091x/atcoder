#include <bits/stdc++.h>
using namespace std;

int main(){
  string x, y;
  cin >> x >> y;
  int vx, vy;
  if(x == "Ocelot") vx = 0;
  if(y == "Ocelot") vy = 0;
  if(x == "Serval") vx = 1;
  if(y == "Serval") vy = 1;
  if(x == "Lynx") vx = 2;
  if(y == "Lynx") vy = 2;
  cout << ( vx >= vy ? "Yes" : "No" ) << endl;
}

