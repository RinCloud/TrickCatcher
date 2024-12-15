#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum =0;
  
  if(N % 10 !=0){
    while(N>0) {
      sum += N % 10;
      N /= 10;
    }
  }
  else sum = 1; // Changed from 10 to 1
  cout << sum << endl;
}
