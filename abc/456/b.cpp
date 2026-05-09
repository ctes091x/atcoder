#include <bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<int>> dice(3, vector<int>(6, 0));
  for(int i=0; i<3; i++){
    for(int j=0; j<6; j++){
      int tmp; cin >> tmp; tmp--; dice[i][j] = tmp;
    }
  }

  vector<vector<int>> probof(3, vector<int>(6, 0));
  for(int i=0; i<3; i++){
    for(int j=0; j<6; j++){
      probof[i][dice[i][j]]++;
    }
  }
  
  vector<vector<int>> tbl = {
    {4,5,6},{4,6,5},{5,4,6},{5,6,4},{6,4,5},{6,5,4}
  };


  int ev = 0;
  for(int i=0; i<6; i++){
    ev += probof[0][tbl[i][0]-1] * probof[1][tbl[i][1]-1] * probof[2][tbl[i][2]-1];
  }
  // cout << ev << endl;
  double evd = (double)ev;
  cout << setprecision(30) << evd / 216.0 << endl;
}

