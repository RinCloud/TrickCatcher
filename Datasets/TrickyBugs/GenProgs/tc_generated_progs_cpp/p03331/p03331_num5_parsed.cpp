#include <iostream>

int main() {
  int N;
  std::cin >> N;
  int sum = 0;

  if (N % 10 != 0) {
    while (N > 0) {
      sum += N % 10;
      N /= 10;
    }
  } else {
    sum = 1;
    while (N > 10) {
      sum += 9;
      N -= 9;
    }
  }
  std::cout << sum << std::endl;
}
