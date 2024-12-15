#include <iostream>
#include <vector>
#include <algorithm>

const int MOD = 998244353;

int main() {
    int N;
    std::cin >> N;
    
    std::vector<int> A(N), B(N);
    for (int i = 0; i < N; ++i) {
        std::cin >> A[i] >> B[i];
    }
    
    std::vector<int> dp(N + 1);
    dp[0] = 1;
    
    for (int i = 0; i < N; ++i) {
        std::vector<int> new_dp(N + 1);
        int sum = 0;
        for (int j = 0; j <= N; ++j) {
            sum += (j >= B[i] ? new_dp[j - B[i]] : dp[j]);
            if (sum >= MOD) {
                sum -= MOD;
            }
            new_dp[j] = static_cast<int>((1LL * sum * A[i]) % MOD);
        }
        dp = std::move(new_dp);
    }
    
    int result = dp[N];
    std::cout << result << std::endl;
    
    return 0;
}