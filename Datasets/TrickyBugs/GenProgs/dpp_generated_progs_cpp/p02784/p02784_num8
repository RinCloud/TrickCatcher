#include <iostream>
#include <unordered_set>
#include <vector>

int main() {
  int H, N;
  std::cin >> H >> N;

  std::vector<int> moves(N);
  for (int i = 0; i < N; i++) {
    std::cin >> moves[i];
  }

  std::unordered_set<int> dp;
  dp.insert(0);
  for (int i = 0; i < N; i++) {
    std::unordered_set<int> next;
    for (const int& value : dp) {
      for (int j = 1; j <= H; j++) {
        int new_value = value + j * moves[i];
        if (new_value >= H) {
          std::cout << "Yes" << std::endl;
          return 0;
        }
        next.insert(new_value);
      }
    }
    dp = next;
  }

  std::cout << "No" << std::endl;
  return 0;
}