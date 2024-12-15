#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 1000000007;

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> h(N);
    for (int i = 0; i < N; i++) {
        std::cin >> h[i];
    }
    
    std::vector<std::vector<int>> dp(N, std::vector<int>(2));
    dp[0][0] = 1;
    dp[0][1] = 1;
    
    for (int i = 1; i < N; i++) {
        int diff = std::abs(h[i - 1] - h[i]);
        dp[i][0] = (2 * dp[i - 1][0] + dp[i - 1][1]) % MOD;
        dp[i][1] = (dp[i - 1][0] + 2 * dp[i - 1][1] - diff * dp[i - 1][0]) % MOD;
        if (dp[i][1] < 0) {
            dp[i][1] += MOD;
        }
    }
    
    std::cout << (dp[N - 1][0] + dp[N - 1][1]) % MOD << std::endl;
    
    return 0;
}