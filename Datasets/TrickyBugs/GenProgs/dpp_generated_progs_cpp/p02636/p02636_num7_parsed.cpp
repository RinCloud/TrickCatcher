#include <iostream>
#include <vector>

const int MOD = 998244353;

int main() {
    std::string S;
    std::cin >> S;

    int N = S.length();
    
    std::vector<int> dp(N + 1, 0);
    dp[0] = 1;
    dp[1] = 0;
    dp[2] = 1;

    for (int i = 3; i <= N; i++) {
        dp[i] = (dp[i - 1] + dp[i - 3]) % MOD;
    }
    
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == '1') {
            count++;
        }
    }

    int result = dp[count];

    std::cout << result << std::endl;

    return 0;
}
