#include <iostream>
#include <cmath>

int count_digits_in_base(int N, int K) {
  // Calculate the number of digits in base K using logarithm
  int num_digits = 1 + std::log(N) / std::log(K);
  return num_digits;
}

int main() {
  int N, K;

  // Read input from standard input
  std::cin >> N >> K;

  // Calculate the number of digits in base K
  int num_digits = count_digits_in_base(N, K);

  // Print the result
  std::cout << num_digits << std::endl;

  return 0;
}