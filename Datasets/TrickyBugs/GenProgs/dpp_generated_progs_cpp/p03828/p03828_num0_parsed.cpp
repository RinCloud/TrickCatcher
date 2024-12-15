#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
  int N;
  cin >> N;

  // Calculate N!
  long long factorial = 1;
  for (int i = 1; i <= N; i++) {
    factorial = (factorial * i) % MOD;
  }
  
  // Count the number of divisors of N!
  int divisors = 1;
  int p = 2;
  while (p * p <= factorial) {
    int count = 0;
    while (factorial % p == 0) {
      count++;
      factorial /= p;
    }
    divisors = (divisors * (count + 1)) % MOD;
    p++;
  }
  
  if (factorial > 1) {
    divisors = (divisors * 2) % MOD;
  }
  
  cout << divisors << endl;

  return 0;
}