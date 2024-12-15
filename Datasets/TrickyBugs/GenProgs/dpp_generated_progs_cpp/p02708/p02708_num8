#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;

    // Initialize the values of the first N+1 integers
    vector<int> values(N+1);
    for (int i = 0; i <= N; i++) {
        values[i] = (int)pow(10, 100) + i;
    }

    // Calculate the number of possible values of the sum
    vector<vector<int>> dp(K+1, vector<int>(N+1));
    dp[0][0] = 1;
    for (int i = 1; i <= K; i++) {
        for (int j = 0; j <= N; j++) {
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
            if (j + 1 <= N) {
                dp[i][j+1] = (dp[i][j+1] + dp[i][j]) % MOD;
            }
        }
    }

    int result = 0;
    for (int i = 0; i <= N; i++) {
        result = (result + dp[K][i]) % MOD;
    }

    cout << result << endl;

    return 0;
}