#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(N + 1, vector<int>(K + 1, 0));
    dp[0][0] = 1;
  
    for (int i = 1; i <= N; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= min(i, K); j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }

    for (int i = 1; i <= K; i++) {
        cout << dp[N][i] << endl;
    }

    return 0;
}