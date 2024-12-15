#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  vector<int> cards(N);
  for (int i = 0; i < N; i++) {
    cin >> cards[i];
  }

  map<pair<int, int>, long long> dp; // dp[card_index, total_sum] = number of ways

  dp[{0, 0}] = 1;

  for (int i = 0; i < N; i++) {
    for (int j = i; j >= 0; j--) {
      for (auto &[val, cnt] : dp) {
        int sum = val.first;
        int num_cards = val.second;
        dp[{sum + cards[i], num_cards + 1}] += cnt;
      }
    }
  }

  long long ans = 0;

  for (auto &[val, cnt] : dp) {
    int sum = val.first;
    int num_cards = val.second;
    if (num_cards > 0 && sum * 1.0 / num_cards == A) {
      ans += cnt;
    }
  }

  cout << ans << endl;

  return 0;
}