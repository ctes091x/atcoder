#include <bits/stdc++.h>
using namespace std;

void solve(){
  string a, b; cin >> a >> b;

  vector<char> sa;
  for(int i=0; i<a.length(); i++){
    sa.push_back(a[i]);
    if(sa.size() >= 4){
      if(sa[sa.size() - 4] == '(' && sa[sa.size() - 3] == 'x' && sa[sa.size() - 2] == 'x' && sa[sa.size() - 1] == ')'){
        sa.pop_back();
        sa.pop_back();
        sa.pop_back();
        sa.pop_back();
        sa.push_back('x');
        sa.push_back('x');
      }
    }
  }
  vector<char> sb;
  for(int i=0; i<b.length(); i++){
    sb.push_back(b[i]);
    if(sb.size() >= 4){
      if(sb[sb.size() - 4] == '(' && sb[sb.size() - 3] == 'x' && sb[sb.size() - 2] == 'x' && sb[sb.size() - 1] == ')'){
        sb.pop_back();
        sb.pop_back();
        sb.pop_back();
        sb.pop_back();
        sb.push_back('x');
        sb.push_back('x');
      }
    }
  }

/*
  for(int i=0; i<sa.size(); i++) cout << sa[i];
  cout << endl;
  for(int i=0; i<sb.size(); i++) cout << sb[i];
  cout << endl;*/

  if(sa.size() != sb.size()){
    // cout << "size is different" << endl;
    cout << "No" << endl;
    return;
  }else{
    for(int i=0; i<sa.size(); i++){
      if(sa[i] != sb[i]){
        //cout << i << ": "<< sa[i] << " and " << sb[i] << "are different" << endl;
        cout << "No" << endl;
        return;
      }
    }
    cout << "Yes" << endl;
  }
}

int main(){
  int t; cin >> t;
  for(int i=0; i<t; i++) solve();
}

