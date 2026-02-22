#include <bits/stdc++.h>
using namespace std;

int main(){
  int q; cin >> q;
  
  stack<char> seq;
  int inside = 0;
  bool bad = false;
  int bad_place = -1;

  for(int i=0; i<q; i++){
    int query; cin >> query;
    if(query == 1){
      char brac; cin >> brac;
      seq.push(brac);
      if(!bad){
        if(brac == '('){
          inside++;
        }else{
          if(inside > 0){
            inside--;
          }else{
            bad = true;
            bad_place = seq.size();
          }
        }
      }
    }else{
      if(!bad){
        if(seq.top() == '('){
          inside--;
        }else{
          inside++;
        }
      }else{
        if(bad_place == seq.size()){
          bad = false;
          bad_place = 100000000;
        }
      }
      seq.pop();
    }

    cout << (inside == 0 && !bad ? "Yes" : "No") << endl;
  }
}

