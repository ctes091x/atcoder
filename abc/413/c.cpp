#include <bits/stdc++.h>
using namespace std;

int main() {
  int n; cin >> n;
  vector<vector<unsigned long long>> seq;
  for(int i=0; i<n; i++){
    int qtype; cin >> qtype; 
    if(qtype==1){
      unsigned long long c,x; cin >> c >> x;
      // c個のx
      seq.insert(seq.begin(), {c, x});
    }else{
      int k; cin >> k;
      unsigned long long output=0;
      while(k>0){
        if(seq[seq.size()-1][0]>k){// std::ostream &operator<<(std::ostream &dest, __int128_t value) {
          //   std::ostream::sentry s(dest);
          //   if (s) {
          //     __uint128_t tmp = value < 0 ? -value : value;
          //     char buffer[128];
          //     char *d = std::end(buffer);
          //     do {
          //       --d;
          //       *d = "0123456789"[tmp % 10];
          //       tmp /= 10;
          //     } while (tmp != 0);
          //     if (value < 0) {
          //       --d;
          //       *d = '-';
          //     }
          //     int len = std::end(buffer) - d;
          //     if (dest.rdbuf()->sputn(d, len) != len) {
          //       dest.setstate(std::ios_base::badbit);
          //     }
          //   }
          //   return dest;
          // }
          
          // __int128 parse(string &s) {
          //   __int128 ret = 0;
          //   for (int i = 0; i < s.length(); i++)
          //     if ('0' <= s[i] && s[i] <= '9')
          //       ret = 10 * ret + s[i] - '0';
          //   return ret;
          // }
          // // https://kenkoooo.hatenablog.com/entry/2016/11/30/163533
          // // なにこれ？？？
          
          output+=k*seq[seq.size()-1][1];
          seq[seq.size()-1][0]-=k;
          k=0;
        }else{
          output+=seq[seq.size()-1][0]*seq[seq.size()-1][1];
          k-=seq[seq.size()-1][0];
          seq.pop_back();
        }
      }
      cout << output << endl;
    }
  }
}
// seq.push_back({1, 2}); 
// cout << seq[0][0] << " " << seq[0][1] << endl;
