#include <iostream>

const int MOD = 1e9 + 7;

long long moduloPower(long long base, long long exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

int main() {
    long long N;
    std::cin >> N;

    long long ans = (3 * moduloPower(2, N) - 2 + MOD) % MOD;
    std::cout << ans << std::endl;

    return 0;
}
