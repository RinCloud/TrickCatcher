#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

long long combination(int n, int k) {
    vector<vector<long long>> memo(n+1, vector<long long>(k+1, 0));

    for (int i = 0; i <= n; ++i) {
        memo[i][0] = 1;
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= k; ++j) {
            memo[i][j] = (memo[i-1][j] + memo[i-1][j-1]) % MOD;
        }
    }

    return memo[n][k];
}

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<long long> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    
    int maxBit = 60;
    int maxBitCnt = 0;
    vector<int> cnt(maxBit, 0);

    for (int i = 0; i < N; ++i) {
        for (int j = maxBit-1; j >= 0; --j) {
            if ((A[i] >> j) & 1) {
                cnt[j]++;
                maxBitCnt = max(maxBitCnt, cnt[j]);
            }
        }
    }

    long long result = 0;
    for (int j = maxBit-1; j >= 0; --j) {
        if ((K >> j) & 1) {
            int k = j;
            vector<long long> memo(maxBitCnt + 2, 0);
            memo[maxBitCnt+1] = 1;
            for (int i = maxBitCnt; i >= 0; --i) {
                memo[i] = (memo[i+1] * combination(cnt[k], i)) % MOD;
            }
            for (int i = 0; i <= maxBitCnt; ++i) {
                result = (result + memo[i]) % MOD;
            }
        }
    }
    cout << result << endl;

    return 0;
}
