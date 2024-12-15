#include <iostream>
#include <vector>

const int MOD = 1000000007;

int main() {
  int N;
  std::cin >> N;

  std::vector<int> A(N), B(N);
  for (int i = 0; i < N; i++) {
    std::cin >> A[i] >> B[i];
  }

  long long total_ways = 0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      long long ways = 1;
      ways *= (A[i] + B[i] + A[j] + B[j]);
      for (int k = 1; k <= A[i] + A[j]; k++) {
        ways = (ways * k) % MOD;
      }
      for (int k = 1; k <= B[i] + B[j]; k++) {
        ways = (ways * k) % MOD;
      }
      total_ways = (total_ways + ways) % MOD;
    }
  }

  std::cout << total_ways << std::endl;

  return 0;
}