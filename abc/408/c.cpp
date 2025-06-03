#include <bits/stdc++.h>
using namespace std;

int main() {
  int num_wall, num_cannon;
  cin >> num_wall >> num_cannon;
  vector<int> protection(num_wall+1);
  int left, right;
  for(int i=0; i<num_cannon; i++){
    cin >> left >> right;
    left--;
    protection[left]++;
    protection[right]--;
  }
  for(int i=0; i<num_wall; i++){
    protection[i+1]+=protection[i];
  }
  int min=num_cannon;
  for(int search=0; search<num_wall; search++){
    if(protection[search]<min) min=protection[search];
  }
  cout << min << endl;
}