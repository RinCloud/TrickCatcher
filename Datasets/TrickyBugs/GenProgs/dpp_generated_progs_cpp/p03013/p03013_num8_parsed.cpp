#include <iostream>
#include <vector>

const int MOD = 1000000007;

int numWays(int N, std::vector<int>& brokenSteps) {
    std::vector<int> dp(N+1, 0);  // dp[i] to store the number of ways to reach step i
    
    dp[0] = 1;  // There is only one way to reach step 0
    
    for (int i = 1; i <= N; i++) {
        if (std::find(brokenSteps.begin(), brokenSteps.end(), i) != brokenSteps.end()) {
            dp[i] = 0;  // If the current step is broken, no way to reach that step
        } else {
            dp[i] = dp[i-1] % MOD + dp[i-2] % MOD;  // Number of ways to reach current step is equal to sum of number of ways to reach previous step and the step before previous
            dp[i] %= MOD;  // Take modulo to prevent overflow
        }
    }
    
    return dp[N];
}

int main() {
    int N, M;
    std::cin >> N >> M;
    
    std::vector<int> brokenSteps(M);
    for (int i = 0; i < M; i++) {
        std::cin >> brokenSteps[i];
    }
    
    int result = numWays(N, brokenSteps);
    std::cout << result << std::endl;
    
    return 0;
}