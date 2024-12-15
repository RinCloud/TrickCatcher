#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    vector<vector<long long>> dp(N + 1, vector<long long>(K + 1));
    dp[0][0] = 1;

    for (int i = 1; i <= N; i++) {
        unordered_map<int, int> cnt;

        for (int j = i - 1; j >= max(i - K, 0); j--) {
            cnt[A[j - 1]]++;
            if (cnt[A[j - 1]] > 1) {
                break;
            }

            for (int k = 1; k <= K; k++) {
                dp[i][k] += dp[j][k - 1];
                dp[i][k] %= MOD;
            }
        }
    }

    long long ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += dp[i][K];
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}