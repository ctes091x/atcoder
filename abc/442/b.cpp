#include <bits/stdc++.h>
using namespace std;

int main(){
  int volume = 0;
  bool playing = false;
  int q; cin >> q;
  for(int i=0; i<q; i++){
    int a; cin >> a;
    if(a == 1){
      volume++;
    }else if(a == 2){
      volume = max(volume - 1, 0);
    }else{
      playing = !playing;
    }
    if(volume >=3 && playing){
      cout << "Yes" << endl;
    }else{
      cout << "No" << endl;
    }
  }
}

