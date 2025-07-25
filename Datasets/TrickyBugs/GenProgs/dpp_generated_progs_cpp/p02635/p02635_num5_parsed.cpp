#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    std::string S;
    int K;
    std::cin >> S >> K;
    
    int N = S.size();
    std::vector<int> cnt(N+1);
    
    for (int i = 0; i < N; ++i) {
        cnt[i+1] = cnt[i] + (S[i] == '1');
    }
    
    std::vector<std::vector<int>> dp(N+1, std::vector<int>(K+1, 0));
    dp[1][0] = 1;
    
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= K; ++j) {
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % MOD;
        }
        
        for (int j = 0; j < i; ++j) {
            int ones = cnt[i] - cnt[j];
            int zeros = i - j - ones;
            
            for (int k = 0; k <= K - ones; ++k) {
                dp[i][k+ones] = (dp[i][k+ones] + dp[j][k] * 2 % MOD) % MOD;
                dp[i][k+zeros] = (dp[i][k+zeros] + dp[j][k]) % MOD;
            }
        }
    }
    
    int result = (dp[N][K] + MOD) % MOD;
    std::cout << result << std::endl;
    
    return 0;
}
