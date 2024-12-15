#include <iostream>
#include <vector>

const long long MOD = 998244353;

int main() {
    int N, K;
    std::cin >> N >> K;

    std::vector<long long> factorial(K + 1);
    factorial[0] = 1;
    for (int i = 1; i <= K; i++) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }

    long long result = 0;
    for (int i = 0; i <= std::min(N, K); i++) {
        long long count = (factorial[N] * factorial[K]) % MOD;
        long long inverse = (factorial[N - i] * factorial[K - i]) % MOD;
        long long ways = (count * inverse) % MOD;
        result = (result + ways) % MOD;
    }

    std::cout << result << std::endl;

    return 0;
}