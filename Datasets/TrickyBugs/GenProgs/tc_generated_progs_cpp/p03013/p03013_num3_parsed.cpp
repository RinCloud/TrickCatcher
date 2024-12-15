#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n >> m;
  int dp[n+1];
  dp[0] = 1;
  dp[1] = 1;
  for (int i = 2; i <= n; ++i) {
    dp[i] = (dp[i-1] + dp[i-2]) % 1000000007;
  }
  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    dp[a] = 0;
  }
  cout << dp[n] << endl;

  return 0;
}
