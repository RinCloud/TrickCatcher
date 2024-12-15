#include <iostream>
#include <vector>

const int MOD = 1e9 + 7;

// Function to calculate gcd of two numbers
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate power of a number modulo MOD
long long power(long long x, unsigned int y) {
    long long res = 1;
    x = x % MOD;

    while (y > 0) {
        if (y & 1)
            res = (res * x) % MOD;

        y = y >> 1;
        x = (x * x) % MOD;
    }
    return res;
}

int main() {
    int N, K;
    std::cin >> N >> K;

    // Calculate gcd sum
    long long sum = 0;
    for (int i = 1; i <= K; i++) {
        // Calculate the number of sequences with gcd i
        long long count = power(K / i, N);

        // Subtract count of sequences with gcd greater than i
        for (int j = 2 * i; j <= K; j += i) {
            count = (count - power(K / j, N) + MOD) % MOD;
        }

        sum = (sum + count * i) % MOD;
    }

    std::cout << sum << std::endl;
    return 0;
}