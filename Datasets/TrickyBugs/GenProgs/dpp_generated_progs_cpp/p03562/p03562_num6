#include <bits/stdc++.h>
using namespace std;

const long long MOD = 998244353;

long long countNumbers(vector<long long>& nums, long long X) {
    int N = nums.size();
    int M = min(X, nums[0] + 1);
    vector<vector<long long>> dp(N, vector<long long>(M));

    dp[0][0] = 1;
    for (long long i = 1; i < M; i++) {
        dp[0][i] = (i <= nums[0]);
    }

    for (int i = 1; i < N; i++) {
        vector<long long> prefix(M + 1);
        for (long long j = 0; j < M; j++) {
            prefix[j + 1] = (prefix[j] + dp[i-1][j]) % MOD;
        }

        for (long long j = 0; j < M; j++) {
            if (j >= nums[i]) {
                dp[i][j] = (dp[i][j] + prefix[j+1] - prefix[j+1-nums[i]] + MOD) % MOD;
            }
        }

        for (long long j = 0; j < M; j++) {
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
        }
    }

    long long result = 0;
    for (int i = 0; i < M; i++) {
        result = (result + dp[N-1][i]) % MOD;
    }

    return result;
}

int main() {
    int N;
    long long X;
    cin >> N >> X;
    vector<long long> nums(N);
    for (int i = 0; i < N; i++) {
        cin >> nums[i];
    }

    long long answer = countNumbers(nums, X);
    cout << answer << endl;

    return 0;
}