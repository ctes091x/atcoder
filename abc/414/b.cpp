#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;cin >> n;
  string output;
  long int length=0;
  for(int i=0; i<n; i++){
    char c;int l;
    cin >> c >> l;
    length+=l;
    if(length>100){
      cout << "Too Long" << endl;
      return 0;
    }
    output.append(l, c);
  }
  cout << output << endl;
}
