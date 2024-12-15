#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int countSequences(int N, int M) {
    vector<vector<int>> dp(M + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 1; i <= M; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= j; k++) {
                dp[i][j] += dp[i - 1][k];
                dp[i][j] %= MOD;
            }
        }
    }

    int result = 0;
    for (int i = 0; i <= N; i++) {
        result += dp[M][i];
        result %= MOD;
    }

    return result;
}

int main() {
    int N, M;
    cin >> N >> M;

    int result = countSequences(N, M);
    cout << result << endl;

    return 0;
}