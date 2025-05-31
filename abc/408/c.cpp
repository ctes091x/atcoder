#include <bits/stdc++.h>
using namespace std;

int main() {
  int protection[1000001];
  int num_wall, num_cannon;
  cin >> num_wall >> num_cannon;
  int left, right;
  for(int i=1; i<=num_cannon; i++){
    cin >> left >> right;
    for(int j=left; j<=right; j++){
      protection[j]++;
    }
  }
  int min=num_cannon;
  for(int search=1; search<=num_wall; search++){
    if(protection[search]<min) min=protection[search];
  }
  cout << min << endl;
}