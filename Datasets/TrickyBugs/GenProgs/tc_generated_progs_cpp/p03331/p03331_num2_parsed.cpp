#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  int sum = 0;

  if (N % 10 == 0) {
    sum = 1;
    N -= 1;
  }
  
  while (N > 0) {
    sum += N % 10;
    N /= 10;
  }
  
  cout << sum << endl;
}