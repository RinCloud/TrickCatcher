#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9+7;

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    long long totalSum = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        totalSum += A[i];
    }

    if (totalSum % 2 != 0) {
        // Impossible to form a valid order
        cout << 0 << endl;
        return 0;
    }

    long long targetSum = totalSum / 2;
    vector<vector<long long>> dp(N + 1, vector<long long>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            dp[i][j] = dp[i - 1][j] % MOD;
            if (j >= A[i-1]){
                dp[i][j] += dp[i - 1][j - A[i-1]] % MOD;
                dp[i][j] %= MOD;
            }
        }
    }

    cout << dp[N][targetSum] << endl;

    return 0;
}