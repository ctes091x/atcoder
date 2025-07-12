#include <bits/stdc++.h>
using namespace std;

int pow_int(int base, int expo){
  int output=1;
  for(int i=0; i<expo; i++){
    output*=base;
  }
  return output;
}

unsigned GetDigit(unsigned num, int base){
	unsigned digit = 0;
	while(num != 0){
		num /= base;
		digit++;
	}
	return digit;
}

bool check(long long int input){
  int len10=GetDigit(input, 10);
  // cout << input << endl;
  for(int i=0; i<1+len10/2; i++){
    // cout << "digit " << i << ": " << input/pow_int(10, i)%10 << endl;
    // cout << "digit " << len10-i-1 << ": " << input/pow_int(10, len10-i-1)%10 << endl;
    if(input/pow_int(10, i)%10!=input/pow_int(10, len10-i-1)%10){
      return false;
    }
  }
  int len8 = GetDigit(input, 8);
  for(int i=0; i<1+len8/2; i++){
    if(input/pow_int(8, i)%8!=input/pow_int(8, len8-i-1)%8){
      return false;
    }
  }
  return true;
}

int main(){
  int a,n;cin >>a>>n;
  long long int output=0;
  for(int i=1; i<=n; i++){
    if(check(i)){
      cout << i << " is pal" << endl;
      output+=i;
    }
  }
  cout << output << endl;
}