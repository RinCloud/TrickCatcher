#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, K, M;
    cin >> N >> K >> M;

    vector<int> A(M);
    for (int i = 0; i < M; i++) {
        cin >> A[i];
    }

    vector<vector<long long>> dp(N + 1, vector<long long>(K + 1, 0));
    vector<vector<long long>> prefix(N + 1, vector<long long>(K + 1, 0));
    vector<long long> total(K + 1, 0);

    for (int i = 1; i <= N; i++) {
        dp[i][A[0]] = 1;
        prefix[i][A[0]] = (prefix[i - 1][A[0]] + dp[i][A[0]]) % MOD;
        total[A[0]] = (total[A[0]] + dp[i][A[0]]) % MOD;
    }

    for (int i = 2; i <= M; i++) {
        for (int j = i; j <= N; j++) {
            for (int k = 1; k <= K; k++) {
                dp[j][k] = (prefix[j - 1][k] - prefix[j - i][k] + MOD) % MOD;
                prefix[j][k] = (prefix[j - 1][k] + dp[j][k]) % MOD;
                total[k] = (total[k] + dp[j][k]) % MOD;
            }
        }
    }

    long long ans = 0;
    for (int k = 1; k <= K; k++) {
        ans = (ans + total[k]) % MOD;
    }

    cout << ans << endl;

    return 0;
}