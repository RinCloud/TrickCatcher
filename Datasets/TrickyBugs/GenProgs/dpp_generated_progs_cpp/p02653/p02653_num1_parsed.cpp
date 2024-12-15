#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= A) {
                dp[i][j] = (dp[i][j] + dp[i - A][j - A]) % MOD;
            }
            if (j >= B) {
                dp[i][j] = (dp[i][j] + dp[i - B][j - B]) % MOD;
            }
        }
    }

    int result = 0;
    for (int j = 0; j <= N; j++) {
        result = (result + dp[N][j]) % MOD;
    }

    cout << result << endl;

    return 0;
}