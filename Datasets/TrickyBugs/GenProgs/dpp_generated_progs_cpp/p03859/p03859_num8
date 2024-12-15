#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    string S;
    cin >> N >> M >> S;
    
    vector<vector<int>> dp(N + 1, vector<int>(N + 1));
    dp[0][0] = 1;
    
    for (int i = 1; i <= N; i++) {
        dp[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
        }
    }
    
    vector<int> l(M), r(M);
    for (int i = 0; i < M; i++) {
        cin >> l[i] >> r[i];
    }
    
    long long ans = 1;
    for (int i = 0; i < M; i++) {
        vector<int> cnt(N + 1);
        for (int j = l[i] - 1; j < r[i]; j++) {
            cnt[j]++;
        }
        
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += cnt[j];
            if (S[j] == '0' && sum <= j + 1) {
                ans += dp[N - (j + 1)][sum];
                ans %= MOD;
            }
        }
    }
    
    cout << ans << endl;
    
    return 0;
}