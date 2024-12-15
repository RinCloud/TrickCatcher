#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    vector<vector<int>> dp(N+1, vector<int>(N+1, 0));
    dp[0][0] = 1;
    for (int i = 1; i <= N; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            dp[i][j] = (dp[i-1][j-1] + dp[i-1][j]) % MOD;
        }
    }
    vector<int> prefixSum(N+1, 0);
    for (int i = 1; i <= N; i++) {
        prefixSum[i] = prefixSum[i-1] + (S[i-1] - '0');
    }
    int result = 1;
    for (int i = 0; i < M; i++) {
        int l, r;
        cin >> l >> r;
        int ones = prefixSum[r] - prefixSum[l-1];
        int zeros = r - l + 1 - ones;
        int cnt = dp[ones+zeros][ones];
        result = (result * cnt) % MOD;
    }
    cout << result << endl;
    return 0;
}