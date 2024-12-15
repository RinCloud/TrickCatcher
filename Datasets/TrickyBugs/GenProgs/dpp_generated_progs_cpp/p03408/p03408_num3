#include <iostream>
#include <unordered_map>

int main() {
  int N, M;
  std::cin >> N;
  
  std::unordered_map<std::string, int> cards;
  for (int i = 0; i < N; i++) {
    std::string s;
    std::cin >> s;
    cards[s]++;
  }
  
  std::cin >> M;
  
  for (int i = 0; i < M; i++) {
    std::string t;
    std::cin >> t;
    cards[t]--;
  }
  
  int max_profit = 0;
  
  for (const auto& card : cards) {
    max_profit = std::max(max_profit, card.second);
  }
  
  std::cout << max_profit << std::endl;

  return 0;
}