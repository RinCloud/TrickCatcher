#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <set>

int main() {
  int N;
  std::cin >> N;

  std::vector<int> A(N);
  for (auto& ai : A) {
    std::cin >> ai;
  }

  std::set<int> characters;
  int min_chr = A[0];
  characters.insert(min_chr);

  for (int i = 1; i < N; i++) {
    if (A[i] < min_chr) {
      characters.insert(A[i]);
    } else {
      min_chr = A[i];
      characters.insert(min_chr);
    }
  }

  std::cout << characters.size() << std::endl;

  return 0;
}