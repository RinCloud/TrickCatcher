#include <iostream>
#include <string>
#include <unordered_set>

int main() {
  std::string S;
  std::cin >> S;

  std::unordered_set<char> unique_chars;

  for (char ch : S) {
    if (unique_chars.count(ch) > 0) {
      std::cout << "no" << std::endl;
      return 0;
    }
    unique_chars.insert(ch);
  }

  std::cout << "yes" << std::endl;
  return 0;
}