#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w;
  cin >> h >> w;
  for(int i=0; i<w; i++) cout << "#";
  cout << endl;
  for(int j=1; j<h-1; j++){
    cout << "#";
    for(int i=1; i<w-1; i++) cout << ".";
    cout << "#" << endl;
  }
  for(int i=0; i<w; i++) cout << "#";
  cout << endl;
}

