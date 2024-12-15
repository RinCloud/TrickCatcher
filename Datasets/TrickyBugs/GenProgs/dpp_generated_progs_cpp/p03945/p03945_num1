#include <iostream>
#include <string>

int main() {
  std::string S;
  std::cin >> S;

  int count = 0;
  char lastStone = S[0];

  for (int i = 1; i < S.length(); i++) {
    if (S[i] != lastStone) {
      count++;
      lastStone = S[i];
    }
  }

  std::cout << count << std::endl;

  return 0;
}