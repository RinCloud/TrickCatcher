#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> factors;
  for (int i = 1; i * i <= M; i++) {
    if (M % i == 0) {
      factors.push_back(i);
      if (i != M / i) {
        factors.push_back(M / i);
      }
    }
  }

  sort(factors.begin(), factors.end());

  vector<long long> dp(N + 1);
  dp[0] = 1;

  for (int i = 1; i <= N; i++) {
    for (int j = 0; j < factors.size(); j++) {
      if (factors[j] > i || factors[j] > M) {
        break;
      }
      if (M % factors[j] == 0) {
        dp[i] = (dp[i] + dp[i / factors[j]]) % MOD;
      }
    }
  }

  cout << dp[N] << endl;

  return 0;
}
