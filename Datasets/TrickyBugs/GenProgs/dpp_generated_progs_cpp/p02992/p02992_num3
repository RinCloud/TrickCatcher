#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(K + 1, vector<int>(N + 1, 0));
    dp[0][1] = 1;

    for (int i = 1; i <= K; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= j; k++) {
                dp[i][j] += dp[i - 1][j / k];
                dp[i][j] %= MOD;
            }
        }
    }

    int result = 0;
    for (int j = 1; j <= N; j++) {
        result += dp[K][j];
        result %= MOD;
    }
    
    cout << result << endl;

    return 0;
}