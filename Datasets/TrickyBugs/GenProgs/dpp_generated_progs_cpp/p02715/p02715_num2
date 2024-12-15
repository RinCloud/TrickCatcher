#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<int> dp(K + 1, 0);
    for (int i = K; i >= 1; --i) {
        dp[i] = static_cast<long long>(K / i) * (K / i) % MOD;
        for (int j = 2 * i; j <= K; j += i) {
            dp[i] = (dp[i] - dp[j] + MOD) % MOD;
        }
    }

    long long result = 0;
    for (int i = 1; i <= K; ++i) {
        result = (result + dp[i]) % MOD;
    }

    int power = 1;
    for (int i = 0; i < N; ++i) {
        power = (power * K) % MOD;
    }

    result = (result * power) % MOD;
    std::cout << result << std::endl;

    return 0;
}