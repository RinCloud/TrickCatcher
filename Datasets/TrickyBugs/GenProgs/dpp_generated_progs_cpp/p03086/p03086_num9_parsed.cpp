#include <iostream>
#include <string>

int main() {
  std::string S;
  std::cin >> S;

  int max_length = 0;
  int current_length = 0;

  for (char c : S) {
    if (c == 'A' || c == 'C' || c == 'G' || c == 'T') {
      current_length++;
      if (current_length > max_length) {
        max_length = current_length;
      }
    } else {
      current_length = 0;
    }
  }

  std::cout << max_length << std::endl;

  return 0;
}