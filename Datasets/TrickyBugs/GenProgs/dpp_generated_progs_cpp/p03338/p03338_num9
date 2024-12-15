#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  int N;
  std::cin >> N;

  std::string S;
  std::cin >> S;

  std::unordered_set<char> distinctLetters;

  for (char letter : S) {
    distinctLetters.insert(letter);
  }

  std::cout << distinctLetters.size() << std::endl;

  return 0;
}