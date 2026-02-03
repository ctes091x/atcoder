#include <bits/stdc++.h>
using namespace std;

int pow_int(int base, int expo){
  int output=1;
  for(int i=0; i<expo; i++){
    output*=base;
  }
  return output;
}

unsigned GetDigit(int num, int base){
	unsigned digit = 0;
	while(num != 0){
		num /= base;
		digit++;
	}
	return digit;
}

bool check(long long int input, int base){
  int len = GetDigit(input, base);
  for(int i=0; i<1+len/2; i++){
    if(input/pow_int(base, i)%base!=input/pow_int(base, len-i-1)%base){
      return false;
    }
  }
  return true;
}

long long int genPal_even(int input){
  int len=GetDigit(input, 10);
  long long int output=0;
  output+=input*pow_int(10, len);
  for(int i=0; i<len; i++){
    output+=pow_int(10, len-i-1)*(input/pow_int(10, i)%10);
  }
  return output;
}

long long int genPal_odd(int input){
  int len=GetDigit(input, 10);
  long long int output=0;
  output+=input*pow_int(10, len-1);
  for(int i=1; i<len; i++){
    output+=pow_int(10, len-i-1)*(input/pow_int(10, i)%10);
  }
  return output;
}

// int main(){
//   while(true){
//     int i; cin >> i;
//     cout << check(i, 8) << endl;;
//   }
// }

int main(){
  int a,n;cin >>a>>n;
  long long int output=0;
  for(int i=1; i<=n; i++){
    long long int pal_odd = genPal_odd(i);
    if(pal_odd>n) break;
    if(check(pal_odd, a)){
      cout << pal_odd << " is pal8" << endl;
      output+=pal_odd;
    }
  }
  for(int i=1; i<=n; i++){
    long long int pal_even = genPal_even(i);
    if(pal_even>n) break;
    if(check(pal_even, a)){
      cout << pal_even << " is pal8" << endl;
      output+=pal_even;
    }
  }
  cout << output << endl;
}