#include <iostream>

int main() {
  int N, X, T;
  std::cin >> N >> X >> T;

  int cycles = (N + X - 1) / X;
  int totalTime = cycles * T;

  std::cout << totalTime << std::endl;

  return 0;
}