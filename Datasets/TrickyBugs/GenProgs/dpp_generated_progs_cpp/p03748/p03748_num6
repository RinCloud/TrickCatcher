#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1e9 + 7;

vector<vector<long long>> dp;

void initializeDP(int N, int M) {
    dp = vector<vector<long long>>(N + 1, vector<long long>(2 * M + 1, 0));

    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= 2 * M; j++) {
            dp[i][j] = (dp[i][j] + dp[i - 1][j] * (2 * i - 1) % MOD) % MOD;
            if (j >= 2) {
                dp[i][j] = (dp[i][j] + dp[i][j - 2] * (i * (i - 1) / 2) % MOD) % MOD;
            }
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    initializeDP(N, M);

    cout << dp[N][2 * M] << endl;

    return 0;
}