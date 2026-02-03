#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m; cin >> n >> m;
  // cout << "got numbers " << n << m<< endl;
  vector<string> votes(n);
  for(int i=0; i<n; i++){
    cin >> votes[i];
  }
  vector<int> scores(n);
  for(int i=0; i<m; i++){
    // string s; cin >> s;
    // 投票先別のリスト
    queue<int> zeros;
    queue<int> ones;
    for(int j=0; j<n; j++){
      if(votes[j][i]=='0'){
        zeros.push(j);
      }else{
        ones.push(j);
      }
    }
    // cout << "opened" << endl;

    // 少数派への加点
    if(zeros.size()>ones.size()){
      while(!ones.empty()){
        int person=ones.front();
        ones.pop();
        scores[person]++;
      }
    }else{
      while(!zeros.empty()){
        int person=zeros.front();
        zeros.pop();
        scores[person]++;
      }
    }
  }

  // 最大値を探す
  int max=0;
  for(int i=0; i<n; i++){
    if(scores[i]>max) max=scores[i];
  }
  // 最大の奴ら
  for(int i=0; i<n; i++){
    if(scores[i]==max) cout << i+1 << " ";
  }
  cout << endl;
}

// int main(){
//   vector<int> scores(n);
//   cout << "got numbers " << n << " " << m << endl;
//   // m回の投票
//   for(int i=0; i<m; i++){
//     cout << "loop " << i << " ";
//     string s; cin >> s;
//     // 投票先別のリスト
//     queue<int> zeros;
//     queue<int> ones;
//     for(int j=0; j<n; j++){
//       if(s[j]=='0'){
//         zeros.push(j);
//       }else{
//         ones.push(j);
//       }
//     }
//     cout << "opened" << endl;
//     // 少数派への加点
//     if(zeros.size()>ones.size()){
//       while(!ones.empty()){
//         int person=ones.front();
//         ones.pop();
//         scores[person]++;
//       }
//     }else{
//       while(!zeros.empty()){
//         int person=zeros.front();
//         zeros.pop();
//         scores[person]++;
//       }
//     }
//   }

//   // 最大値を探す
//   int max=0;
//   for(int i=0; i<n; i++){
//     if(scores[i]>max) max=scores[i];
//   }
//   // 最大の奴ら
//   for(int i=0; i<n; i++){
//     if(scores[i]==max) cout << i << " ";
//   }
//   cout << endl;
// }