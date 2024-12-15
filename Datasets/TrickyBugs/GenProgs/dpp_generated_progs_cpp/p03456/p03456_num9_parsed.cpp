#include <iostream>
#include <cmath>
#include <string>

bool isSquareNumber(int a, int b) {
  std::string concatenated = std::to_string(a) + std::to_string(b);
  int num = std::stoi(concatenated);
  int sqrt_num = std::sqrt(num);

  return (sqrt_num * sqrt_num == num);
}

int main() {
  int a, b;
  std::cin >> a >> b;

  if (isSquareNumber(a, b)) {
    std::cout << "Yes" << std::endl;
  } else {
    std::cout << "No" << std::endl;
  }

  return 0;
}