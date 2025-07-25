#include <iostream>
#include <vector>
#define mod 998244353
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
  
    // Dynamic programming to calculate the number of strings
    // Initialize dp matrix
    vector<vector<int>> dp(n+1, vector<int>(n+1));
  
    // Base case
    dp[0][0] = 1;
  
    // Fill dp matrix
    for(int i=1; i<=n; i++) {
        dp[i][0] = (dp[i-1][1] * 2) % mod;
        for(int j=1; j<=i; j++) {
            if(j == 1) {
                dp[i][j] = (dp[i-1][1] + dp[i-1][2]) % mod;
            }
            else {
                dp[i][j] = (dp[i-1][j-1] + dp[i-1][j+1]) % mod;
            }
        }
    }
  
    // Calculate the number of strings
    int ans = 0;
    for(int i=0; i<=n; i++) {
      ans += dp[n][i];
      ans %= mod;
    }
  
    cout << ans << endl;
  
    return 0;
}
