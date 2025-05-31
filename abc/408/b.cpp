#include <bits/stdc++.h>
using namespace std;

int main() {
  int list[101];
  int M, num;
  cin >> M;
  for(int i=1; i<=100; i++){
    list[i]=0;
  }
  for(int i=1; i<=M; i++){
    cin >> num;
    list[num]++;
  }
  int count=0;
  for(int i=1; i<=100; i++){
    if(list[i]>0){
      count++;
    }
  }
  cout << count << endl;
  string output;
  for(int i=1; i<=100; i++){
    if(list[i]>0){
      output+=(to_string(i)+" ");
    }
  }
  cout << output << endl;
}