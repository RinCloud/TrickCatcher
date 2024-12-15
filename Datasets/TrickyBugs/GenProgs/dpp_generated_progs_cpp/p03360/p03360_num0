#include <iostream>
#include <algorithm>

int main() {
  int A, B, C, K;
  std::cin >> A >> B >> C >> K;

  std::cout << (A + B + C + std::max({A, B, C}) * (1 << K) - std::max({A, B, C})) << std::endl;

  return 0;
}