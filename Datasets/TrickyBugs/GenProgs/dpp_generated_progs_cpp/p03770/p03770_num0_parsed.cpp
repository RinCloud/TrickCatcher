#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

const int MOD = 1000000007;

int main() {
  int N, X, Y;
  cin >> N >> X >> Y;

  vector<int> c(N+1); // color
  vector<int> w(N+1); // weight
  unordered_map<int, long long> cnt; // number of balls per color
  vector<long long> ways(N+1); // number of ways to arrange balls of color i
  vector<long long> dp(N+1); // DP array to store results for each color

  for (int i = 1; i <= N; i++) {
    cin >> c[i] >> w[i];
    cnt[c[i]]++;
  }

  for (int i = 1; i <= N; i++) {
    ways[c[i]] += cnt[c[i]]-1;
  }

  for (int i = 1; i <= N; i++) {
    for (int j = cnt[i]; j >= 1; j--) {
      ways[i] *= j;
      ways[i] %= MOD;
    }
  }

  dp[0] = 1;

  for (int i = 1; i <= N; i++) {
    for (int j = X; j >= 0; j--) {
      for (int k = Y; k >= 0; k--) {
        if (j + w[i] <= X) {
          dp[j + w[i]] = (dp[j + w[i]] + dp[j]) % MOD;
        }
        if (k + w[i] <= Y && j + Y - k >= w[i]) {
          dp[j + Y - k] = (dp[j + Y - k] + dp[j]) % MOD;
        }
      }
    }
  }

  long long answer = dp[X] * ways[1] % MOD;

  for (int i = 2; i <= N; i++) {
    answer = answer * ways[i] % MOD;
  }

  cout << answer << endl;
  return 0;
}