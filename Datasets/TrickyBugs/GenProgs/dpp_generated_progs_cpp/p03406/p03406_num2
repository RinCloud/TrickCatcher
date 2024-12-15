#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
  int N, M;
  cin >> N >> M;

  vector<int> A(M);
  for (int i = 0; i < M; i++) {
    cin >> A[i];
  }

  vector<int> factorial(N + 1);
  factorial[0] = 1;
  for (int i = 1; i <= N; i++) {
    factorial[i] = (factorial[i - 1] * i) % MOD;
  }

  vector<int> dp(1 << N, 0);
  dp[0] = 1;

  for (int mask = 0; mask < (1 << N); mask++) {
    if (dp[mask] == 0) {
      continue;
    }

    int remaining = 0;
    for (int i = 0; i < N; i++) {
      if ((mask & (1 << i)) == 0) {
        remaining++;
      }
    }

    for (int i = 0; i < M; i++) {
      int winner = A[i];

      if ((mask & (1 << (winner - 2))) == 0) {
        continue;
      }

      if (winner != 2 && winner != 1) {
        winner--;
      }
      int newMask = mask | (1 << (winner - 1));
      dp[newMask] = (dp[newMask] + dp[mask]) % MOD;
    }

    if (remaining >= 2) {
      int newMask = mask | 1;
      dp[newMask] = (dp[newMask] + dp[mask] * (remaining - 1)) % MOD;
    }
  }

  int answer = dp[(1 << N) - 1] * factorial[N] % MOD;
  cout << answer << endl;

  return 0;
}