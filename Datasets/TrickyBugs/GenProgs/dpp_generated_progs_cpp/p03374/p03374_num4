#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, C;
  cin >> N >> C;
  vector<pair<int, int>> sushi(N);
  for (int i = 0; i < N; i++) {
    cin >> sushi[i].first >> sushi[i].second;
  }

  // Calculate the prefix sum of nutrition and cumulative maximum nutrition for moving clockwise.
  vector<long long> prefix_sum(N + 1, 0);
  vector<long long> max_nutrition(N + 1, 0);
  long long clockwise_sum = 0;
  for (int i = 0; i < N; i++) {
    clockwise_sum += sushi[i].second;
    prefix_sum[i + 1] = suffix_sum[i] + sushi[i].second - (sushi[i].first - sushi[i - 1].first);
    max_nutrition[i + 1] = max(max_nutrition[i], prefix_sum[i + 1]);
  }

  // Calculate the prefix sum of nutrition and cumulative maximum nutrition for moving counterclockwise.
  vector<long long> suffix_sum(N + 1, 0);
  vector<long long> max_nutrition_reverse(N + 1, 0);
  long long counterclockwise_sum = 0;
  for (int i = N - 1; i >= 0; i--) {
    counterclockwise_sum += sushi[i].second;
    suffix_sum[i] = suffix_sum[i + 1] + sushi[i].second - (sushi[i + 1].first - sushi[i].first);
    max_nutrition_reverse[i] = max(max_nutrition_reverse[i + 1], suffix_sum[i]);
  }

  // Calculate the maximum possible value of the total nutrition taken in minus the total energy consumed.
  long long ans = 0;
  for (int i = 0; i <= N; i++) {
    ans = max(ans, max_nutrition[i] - (C - sushi[i].first));
  }
  for (int i = N; i >= 0; i--) {
    ans = max(ans, max_nutrition_reverse[i] - sushi[i].first);
  }

  cout << ans << endl;

  return 0;
}