#include <iostream>

int main() {
    int N;
    std::cin >> N;
    
    // DP array to store the minimum number of operations required to withdraw each amount
    int dp[N+1];
    
    // Initialize dp array with maximum possible value
    for (int i = 0; i <= N; i++) {
        dp[i] = N + 1;
    }
    
    // Base case: it takes 0 operations to withdraw 0 yen
    dp[0] = 0;
    
    // Iterate through all possible amounts
    for (int i = 1; i <= N; i++) {
        // Try all possible operations (1 yen, 6 yen, 36 yen, 216 yen, etc.)
        for (int j = 1; j <= i; j *= 6) {
            dp[i] = std::min(dp[i], dp[i-j] + 1);
        }
        for (int j = 1; j <= i; j *= 9) {
            dp[i] = std::min(dp[i], dp[i-j] + 1);
        }
    }
    
    std::cout << dp[N] << std::endl;
    
    return 0;
}