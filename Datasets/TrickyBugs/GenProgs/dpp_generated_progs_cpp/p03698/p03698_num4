#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  std::string S;
  std::cin >> S;

  std::unordered_set<char> seen_characters;

  bool all_different = true;
  for (char c : S) {
    if (seen_characters.count(c) > 0) {
      all_different = false;
      break;
    }
    seen_characters.insert(c);
  }

  if (all_different) {
    std::cout << "yes" << std::endl;
  } else {
    std::cout << "no" << std::endl;
  }

  return 0;
}