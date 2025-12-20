#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  vector<int> a;
  for(int i=0; i<n; i++){
    int tmp;
    cin >> tmp;
    a.push_back(tmp);
  }
  vector<int> b;
  for(int i=0; i<m; i++){
    int tmp;
    cin >> tmp;
    b.push_back(tmp);
  }

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  
  for(int i=0; i<n; i++){
    int sum=0;
    sum+=a[i];
    a[i]=sum;
  }
  for(int i=0; i<m; i++){
    int sum=0;
    sum+=b[i];
    b[i]=sum;
  }
  
  vector<int> bounds;
  for(int i=0; i<m; i++){
    //a[bound]-b[i]が正に転じるboundをしらべる
    bool found_bound=false;
    int bmin=0;
    int bmax=n-1;
    while(!found_bound){
      if(a[(bmax+bmin)/2]-b[i] > 0){
        bmin=((bmax+bmin)%2==0? (bmax+bmin)/2 : (bmax+bmin)/2+1);
      } else if(a[(bmin+bmax)/2]-b[i] < 0){
        bmax=((bmax+bmin)%2==0? (bmax+bmin)/2 : (bmax+bmin)/2+1);
      } else {
        found_bound = true;
        bounds.push_back((bmin+bmax)/2);
      }
    }
  }
}

