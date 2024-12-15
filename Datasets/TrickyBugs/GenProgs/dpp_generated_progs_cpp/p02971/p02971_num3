#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int N;
  std::cin >> N;

  std::vector<int> sequence(N);
  for (int i = 0; i < N; ++i) {
    std::cin >> sequence[i];
  }

  for (int i = 0; i < N; ++i) {
    int max_elem = *std::max_element(sequence.begin(), sequence.begin() + i);
    max_elem = std::max(max_elem, *std::max_element(sequence.begin() + i + 1, sequence.end()));
    std::cout << max_elem << std::endl;
  }

  return 0;
}