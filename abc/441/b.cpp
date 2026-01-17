#include <bits/stdc++.h>
using namespace std;

bool isword(string dict, string word){
  for(int i=0; i<word.length(); i++){
    bool match = false;
    for(int j=0; j<dict.length(); j++){
      if(word[i] == dict[j]){
        match = true;
        break;
      }
    }
    if(!match) return false;
  }
  return true;
}

int main(){
  int n, m;
  cin >> n >> m;
  string s, t;
  cin >> s >> t;
  int q;
  cin >> q;
  for(int i=0; i<q; i++){
    string word;
    cin >> word;
    if(isword(s, word) && !isword(t, word)){
      cout << "Takahashi" << endl;
    }else if(!isword(s, word) && isword(t, word)){
      cout << "Aoki" << endl;
    }else{
      cout << "Unknown" << endl;
    }
  }
}
