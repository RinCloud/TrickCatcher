#include <iostream>

const long long MOD = 1000000007;

long long countPairs(long long N) {
    long long ans = 0;
    for (int u = 0; u <= N; u++) {
        for (int v = 0; v <= N; v++) {
            long long a = (u + v) / 2;
            long long b = (v - u) / 2;
            if ((a ^ b) == u && a + b == v) {
                ans++;
            }
        }
    }
    return ans % MOD;
}

int main() {
    long long N;
    std::cin >> N;
    std::cout << countPairs(N) << std::endl;
    return 0;
}