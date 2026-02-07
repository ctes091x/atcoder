#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  ll n; cin >> n;
  vector<ll> a;
  for(ll i=0; i<n; i++){
    ll tmp; cin >> tmp;
    a.push_back(tmp);
  }

  //cout << "input ok" << endl;

  sort(a.begin(), a.end(), [](ll p, ll q){return p>q;});
  //sort(a.begin(), a.end());
  ll maxlen=a[0];
  vector<ll> am;
  for(ll i=0; i<n; i++){
    am.push_back(maxlen - a[i]);
  }

  //cout << "sort and reverse ok" << endl;
  
  vector<ll> o_seq(maxlen);
  for(ll i=0; i<n; i++) o_seq[am[i]]++;

  //cout << "expand ok" << endl;

  vector<ll> sum_seq;
  sum_seq.push_back(0);
  for(ll i=0; i<maxlen; i++) sum_seq.push_back(sum_seq[i] + o_seq[i]);

  //cout << "sum accumulation ok" << endl;

  vector<ll> res_seq;
  ll carry=0;
  for(ll i=maxlen; i>0; i--){
    res_seq.push_back((sum_seq[i] + carry) % 10);
    carry = (sum_seq[i]+carry) / 10;
  }

  //cout << "carrying ok" << endl;
  
  if(carry != 0) cout << carry;

  for(ll i=maxlen-1; i>=0; i--) cout << res_seq[i];

  cout << endl;
}

