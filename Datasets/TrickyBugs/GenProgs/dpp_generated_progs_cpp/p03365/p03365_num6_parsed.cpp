#include <iostream>

const int MOD = 1000000007;

int main() {
  int N;
  std::cin >> N;

  long long ans = 1;
  for (int i = 1; i <= N - 2; ++i) {
    ans = (ans * i) % MOD;
  }

  std::cout << ans << std::endl;
  
  return 0;
}
