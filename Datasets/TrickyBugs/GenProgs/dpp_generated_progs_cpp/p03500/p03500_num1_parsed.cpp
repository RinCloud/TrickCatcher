#include <iostream>
#include <vector>

using namespace std;

const long long MOD = 1000000007;

int main() {
    int N;
    long long K;
    cin >> N >> K;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<vector<long long>> dp(N + 1, vector<long long>(K + 1, 0));
    
    dp[0][0] = 1;
    
    for (int i = 0; i < N; i++) {
        vector<long long> cnt(K + 1, 0);
        
        for (int j = 0; j <= K; j++) {
            cnt[j] = (cnt[j] + dp[i][j]) % MOD;
            if (A[i] > 0 && j + 1 <= K) {
                cnt[j + 1] = (cnt[j + 1] + dp[i][j]) % MOD;
            }
            if (A[i] % 2 == 0 && j + A[i] / 2 <= K) {
                cnt[j + A[i] / 2] = (cnt[j + A[i] / 2] + dp[i][j]) % MOD;
            }
        }
        
        for (int j = 0; j <= K; j++) {
            dp[i + 1][j] = (dp[i + 1][j] + cnt[j]) % MOD;
            if (A[i] > 0 && j + 1 <= K) {
                dp[i + 1][j + 1] = (dp[i + 1][j + 1] + cnt[j]) % MOD;
            }
        }
    }
    
    long long ans = dp[N][K];
    
    cout << ans << endl;

    return 0;
}