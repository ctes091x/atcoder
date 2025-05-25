#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int buttonA=s.size(), buttonB=0;
  for(int i=0; i<s.size(); i++){
    int tail=int(s.at(s.size()-i-1))-48;
    buttonB += (((tail-buttonB)%10)>=0?((tail-buttonB)%10):10+((tail-buttonB)%10));
    // cout << "i:" << i << "; tail:" << tail << "; buttonB:" << buttonB << ";" << endl;
  }
  cout << buttonA + buttonB << endl;
}