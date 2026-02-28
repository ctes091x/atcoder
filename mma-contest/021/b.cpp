#include <bits/stdc++.h>
using namespace std;

int nmod(int a, int b){
  return(((a % b) + b ) % b);
}

int main(){
  int p, q, y0, p0, q0, y;
  cin >> p >> q >> y0 >> p0 >> q0 >> y;
  int rp = (nmod((y-y0), p) + p0) % p;
  rp = (rp == 0 ? p : rp);
  int rq = (nmod((y-y0), q) + q0) % q;
  rq = (rq == 0 ? q : rq);
  cout << rp << " " << rq << endl;
}


