#include <iostream>
#include <cmath>

int main() {
  int X;
  std::cin >> X;

  int result = 1;
  for (int base = 2; base * base <= X; base++) {
    int power = 2;
    int temp = 0;
    while ((temp = pow(base, power)) <= X) {
      result = std::max(result, temp);
      power++;
    }
  }

  std::cout << result << std::endl;

  return 0;
}