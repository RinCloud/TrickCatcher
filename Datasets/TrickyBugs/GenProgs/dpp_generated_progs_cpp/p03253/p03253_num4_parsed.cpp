#include <iostream>
#include <vector>

const int MOD = 1000000007;

int countSequences(int N, int M) {
    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(M + 1, 0));
    dp[0][1] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            for (int k = 1; k <= j; k++) {
                if (j % k == 0) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j / k]) % MOD;
                }
            }
        }
    }
    
    int result = 0;
    for (int i = 1; i <= M; i++) {
        result = (result + dp[N][i]) % MOD;
    }
    
    return result;
}

int main() {
    int N, M;
    std::cin >> N >> M;
    
    int result = countSequences(N, M);
    std::cout << result << std::endl;

    return 0;
}