#include<iostream>
#include<algorithm>
#include<cmath>

int main() {
  int x, y;
  std::cin >> x >> y;

  // Calculate the absolute difference between x and y
  int diff = std::abs(y - x);

  // If x is negative and y is positive, or vice versa, we need to increment
  // the number of button presses by 1
  if ((x < 0 && y > 0) || (x > 0 && y < 0)) {
    diff++;
  }

  // Output the minimum number of button presses needed
  std::cout << diff << std::endl;

  return 0;
}