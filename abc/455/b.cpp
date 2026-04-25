#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w;
  cin >> h >> w;
  vector<string> galaxy(h);
  for(int i=0; i<h; i++) cin >> galaxy[i];


  int ret = 0;

  for(int h1=0; h1<h; h1++){
    for(int h2=h1; h2<h; h2++){
      for(int w1=0; w1<w; w1++){
        for(int w2=w1; w2<w; w2++){
          // for an area
          bool ok = true;
          for(int i=h1; i<=h2; i++){
            for(int j=w1; j<=w2; j++){
              if(galaxy[i][j] != galaxy[h1 + h2 - i][w1 + w2 - j]){
                ok = false;
                break;
              }
            }
            if(!ok) break;
          }
          if(ok) ret++;
          // end for an area
        }
      }
    }
  }
  cout << ret << endl;
}

