#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<vector<int>> dp(M + 1, vector<int>(N + 1));

    dp[0][0] = 1;
    for (int i = 1; i <= M; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= j; k++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - k]) % MOD;
            }
        }
    }

    int count = 0;
    for (int i = 0; i <= N; i++) {
        count = (count + dp[M][i]) % MOD;
    }

    cout << count << endl;

    return 0;
}