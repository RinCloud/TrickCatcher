#include<iostream>
using namespace std;

int main(){
  long N, ans = 0;
  cin >> N;

  if(N % 2 != 0){
      ans = 0;
  } else{
      for(long i = 10; i <= N; i *= 5){
          ans += N / i;
      }
  }

  cout << ans;
}
