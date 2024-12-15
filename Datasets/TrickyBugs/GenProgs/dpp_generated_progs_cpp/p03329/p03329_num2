#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  
  vector<int> dp(N+1, N);
  dp[0] = 0;
  
  vector<int> coins = {1, 6, 9};
  
  for (int i = 1; i <= N; i++) {
    for (int j = 0; j < coins.size(); j++) {
      if (i - coins[j] >= 0) {
        dp[i] = min(dp[i], dp[i - coins[j]] + 1);
      }
    }
  }
  
  cout << dp[N] << endl;
  
  return 0;
}