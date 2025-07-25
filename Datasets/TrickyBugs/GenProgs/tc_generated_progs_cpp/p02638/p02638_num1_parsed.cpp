#include <bits/stdc++.h>

using namespace std;

const int MOD = 998244353;
const int MAX_N = 210;

int dp[MAX_N][MAX_N];
int comb[MAX_N][MAX_N];

int calc(int n, int m, int a, int b) {
  int ans = comb[n+m][n];
  pair<int, int> p {0, 0};
  int sg = 0;
  while (1) {
    if (sg == 0)
      p = {p.second - a, p.first + a};
    else
      p = {p.second - b, p.first + b};
    if (p.first > n || p.second > m)
      break;
    if (sg == 0)
      ans = (ans + MOD - comb[n + m][n - p.first]) % MOD;
    else
      ans = (ans + comb[n + m][n - p.first]) % MOD;
    sg ^= 1;
  }
  p = {0, 0};
  sg = 0;
  while (1) {
    if (sg == 0)
      p = {p.second - b, p.first + b};
    else
      p = {p.second - a, p.first + a};
    if (p.first > n || p.second > m)
      break;
    if (sg == 0)
      ans = (ans + MOD - comb[n + m][n - p.first]) % MOD;
    else
      ans = (ans + comb[n + m][n - p.first]) % MOD;
    sg ^= 1;
  }
  return ans;
}

int solve(int n, int k) {
  int ans = 0;
  for (int a = 2; a <= k+1; a++) {
    int b = n-a;
    if (b < 1 || b > k + 1)
      continue;
    int t = calc(a-1, b, b-(k+2),(k+2)-a);
    if (a + b <= k+1)
      t = (MOD - 1LL * t) % MOD;
    ans = (ans + t) % MOD;
  }
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  for (int i = 0; i < MAX_N; i++) {
    comb[i][0] = comb[i][i] = 1;
    for (int j = 1; j < i; j++)
      comb[i][j] = (comb[i-1][j-1] + comb[i-1][j]) % MOD;
  }

  int n, k;
  cin >> n >> k;

  int ans = 0;
  for (int deg = 0; deg <= n-2; deg++) {
    ans = (1LL * ans + 1LL * solve(n - deg, k - deg) * (n - deg)) % MOD;
  }

  if (k >= n-1) {
    ans = (ans + 1) % MOD;
  }

  for (int i = 1; i <= n; i++)
    ans = (1LL * ans * i) % MOD;

  cout << ans << '\n';

  return 0;
}
