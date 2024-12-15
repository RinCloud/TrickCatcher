#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  // Read the input integers
  int A, B, C;
  std::cin >> A >> B >> C;

  int K;
  std::cin >> K;

  // Create a vector to store the three integers written on the blackboard
  std::vector<int> blackboard = {A, B, C};

  // Repeat the operation K times
  for (int i = 0; i < K; ++i) {
    // Find the largest integer in the blackboard
    auto max_iter = std::max_element(blackboard.begin(), blackboard.end());

    // Replace the largest integer with its double
    *max_iter *= 2;
  }

  // Calculate and print the sum of the integers on the blackboard
  int sum = 0;
  for (int num : blackboard) {
    sum += num;
  }
  std::cout << sum << std::endl;

  return 0;
}