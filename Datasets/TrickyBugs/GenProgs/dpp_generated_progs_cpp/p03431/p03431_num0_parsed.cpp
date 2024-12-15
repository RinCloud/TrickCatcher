#include <iostream>
const int MOD = 998244353;

// Function to calculate the factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = (fact * i) % MOD;
    }
    return fact;
}

// Function to calculate the modular inverse
int modInverse(int a, int m) {
    int m0 = m;
    int y = 0, x = 1;

    if (m == 1) {
        return 0;
    }

    while (a > 1) {
        // q is quotient
        int q = a / m;
        int t = m;

        // m is remainder now, process same as Euclid's algorithm
        m = a % m, a = t;
        t = y;

        // Update y and x
        y = x - q * y;
        x = t;
    }

    // Make x positive
    if (x < 0) {
        x += m0;
    }

    return x;
}

// Function to calculate the possible ways to throw balls
int calculateWays(int N, int K) {
    if (N >= K) {
        return 0;
    }

    int ans = factorial(K);
    int denom = (factorial(N) * factorial(K - N)) % MOD;

    // Calculate the modular inverse of denominator
    int denomInverse = modInverse(denom, MOD);

    // Multiply the ans with modular inverse of denominator
    ans = (ans * denomInverse) % MOD;

    return ans;
}

int main() {
    int N, K;
    std::cin >> N >> K;

    int ways = calculateWays(N, K);
    std::cout << ways << std::endl;

    return 0;
}