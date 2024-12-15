#include <iostream>
#include <vector>
using namespace std;

const int MOD = 924844033;

int main() {
    int N, K;
    cin >> N >> K;

    vector<vector<int>> dp(N + 1, vector<int>(N + 1)); // dp[i][j] represents the number of valid permutations of length i with difference j

    for (int i = 1; i <= N; i++) {
        dp[1][i] = 1;
    }

    for (int i = 2; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            for (int k = 1; k <= N; k++) {
                if (j != k && abs(j - k) != K) {
                    dp[i][j] += dp[i - 1][k];
                    dp[i][j] %= MOD;
                }
            }
        }
    }

    int result = 0;
    for (int i = 1; i <= N; i++) {
        result += dp[N][i];
        result %= MOD;
    }

    cout << result << endl;

    return 0;
}