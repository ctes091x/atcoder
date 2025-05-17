#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, c=0;
  cin >> N >> A;
  string output;
  while(N>0){
    c+=1;
    string op;
    int B;
    cin >> op >> B;
    if(op=="+"){
      A+=B;
    }else if(op=="-"){
      A-=B;
    }else if(op=="*"){
      A*=B;
    }else if(op=="/"){
      if(B==0){
        cout << "error" << endl;
        return 0;
      }else{
        A/=B;
      }
    }
    cout << c << ":" << A << endl;
    N-=1;
  }
  cout << output;
}
