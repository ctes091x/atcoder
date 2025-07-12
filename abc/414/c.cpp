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

bool check(long long int input){
  // int len10=GetDigit(input, 10);
  // // cout << input << endl;
  // for(int i=0; i<1+len10/2; i++){
  //   // cout << "digit " << i << ": " << input/pow_int(10, i)%10 << endl;
  //   // cout << "digit " << len10-i-1 << ": " << input/pow_int(10, len10-i-1)%10 << endl;
  //   if(input/pow_int(10, i)%10!=input/pow_int(10, len10-i-1)%10){
  //     return false;
  //   }
  // }
  int len8 = GetDigit(input, 8);
  for(int i=0; i<1+len8/2; i++){
    if(input/pow_int(8, i)%8!=input/pow_int(8, len8-i-1)%8){
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

int main(){
  int a,n;cin >>a>>n;
  long long int output=0;
  for(int i=1; i<=n; i++){
    long long int pal_odd = genPal_odd(i);
    if(pal_odd>n) break;
    if(check(pal_odd)){
      cout << pal_odd << " is pal8" << endl;
      output+=pal_odd;
    }
  }
  for(int i=1; i<=n; i++){
    long long int pal_even = genPal_even(i);
    if(pal_even>n) break;
    if(check(pal_even)){
      cout << pal_even << " is pal8" << endl;
      output+=pal_even;
    }
  }
  cout << output << endl;
}