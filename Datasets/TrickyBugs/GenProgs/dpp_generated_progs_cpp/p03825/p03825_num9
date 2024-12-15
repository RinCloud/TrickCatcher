#include <iostream>
#include <vector>

using namespace std;
const int MOD = 1000000007;

long long solve(int N, int M, int K) {
    vector<vector<long long>> dp(N + 1, vector<long long>(M + 1, 0));
    
    dp[0][0] = 1;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            if (i > 0 && j + 1 <= M) {
                dp[i][j + 1] = (dp[i][j + 1] + dp[i - 1][j]) % MOD;
            }
            if (j > 0 && i + 1 <= N && (i + j) % (K - 1) == 0) {
                dp[i + 1][j] = (dp[i + 1][j] + dp[i][j]) % MOD;
            }
        }
    }
    
    return dp[N][M];
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    long long result = solve(N, M, K);
    cout << result << endl;
    
    return 0;
}