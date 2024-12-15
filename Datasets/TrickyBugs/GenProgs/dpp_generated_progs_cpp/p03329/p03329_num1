#include <iostream>
#include <vector>
#include <cmath>

int leastOperations(int N) {
    std::vector<int> dp(N + 1, N + 1); // dp[i] stores the minimum operations to withdraw i yen
    dp[0] = 0;

    for (int i = 1; i <= N; i++) {
        // Check if withdrawing 1 yen is a better option
        dp[i] = dp[i - 1] + 1;

        // Check if withdrawing 6^j yen is a better option
        for (int j = 1; std::pow(6, j) <= i; j++) {
            dp[i] = std::min(dp[i], dp[i - static_cast<int>(std::pow(6, j))] + 1);
        }

        // Check if withdrawing 9^j yen is a better option
        for (int j = 1; std::pow(9, j) <= i; j++) {
            dp[i] = std::min(dp[i], dp[i - static_cast<int>(std::pow(9, j))] + 1);
        }
    }

    return dp[N];
}

int main() {
    int N;
    std::cin >> N;
    
    int x = leastOperations(N);
    std::cout << x << std::endl;

    return 0;
}