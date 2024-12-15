#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum = 0;

  if(N % 10 != 0){
    for(int i = 1; i <= N/2; i++){
      int temp = i, digitsum = 0;
      while(temp > 0){
        digitsum += temp % 10;
        temp /= 10;
      }

      temp = N - i;
      while(temp > 0){
        digitsum += temp % 10;
        temp /= 10;
      }

      if(sum == 0 || digitsum < sum){
        sum = digitsum;
      }
    }
  }
  else sum = 10;

  cout << sum << endl;
}
