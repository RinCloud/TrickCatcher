#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<vector<long long>> dp(N+1, vector<long long>(N+1, 0));
    dp[0][0] = 1;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            if (i > 0 && j >= A) {
                dp[i][j] = (dp[i][j] + dp[i-1][j-A]) % MOD;
            }
            if (i > 0 && j >= B) {
                dp[i][j] = (dp[i][j] + dp[i-1][j-B]) % MOD;
            }
        }
    }

    long long ans = 0;
    for (int i = 0; i <= N; i++) {
        ans = (ans + dp[N][i]) % MOD;
    }
    
    cout << ans << endl;

    return 0;
}