#include <iostream>
using namespace std;
int main() {
  int n, m;
  cin >> n;
  cin >> m;
  int dp[n+1];
  for (int i = 0; i < n+1; ++i) {
    dp[i] = 1;
  }
  
  // dp[n+1] should be dp[0]
  dp[0] = 0;
  
  for (int i = 0; i < m; ++i) {
    int a;
    cin >> a;
    // Since we need to avoid the broken steps, assign dp[a] = 0
    dp[a] = 0;
  }
  
  for (int i = n-1; i >= 0; --i) {
    if (dp[i] > 0) {
      dp[i] = (dp[i+1] + dp[i+2]) % 1000000007;
    }
  }
  cout << dp[0] << endl;

  return 0;
}
