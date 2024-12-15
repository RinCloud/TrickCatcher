#include <iostream>
#include <vector>

const int MOD = 1000000007;

// Function to calculate gcd of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

// Function to calculate the power of a number modulo MOD
int power(int x, int y) {
    int res = 1;
    while (y) {
        if (y & 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}

// Function to calculate the sum of gcd(A1, A2, ..., AN) modulo MOD
int calculateSum(int N, int K) {
    std::vector<int> counts(K + 1, 0);
    for (int i = 1; i <= K; i++) {
        counts[i] = power(K / i, N);
    }

    for (int i = K; i >= 1; i--) {
        for (int j = 2 * i; j <= K; j += i) {
            counts[i] = (counts[i] - counts[j] + MOD) % MOD;
        }
    }

    int sum = 0;
    for (int i = 1; i <= K; i++) {
        sum = (sum + (counts[i] * i) % MOD) % MOD;
    }

    return sum;
}

int main() {
    int N, K;
    std::cin >> N >> K;

    int sum = calculateSum(N, K);

    std::cout << sum << std::endl;

    return 0;
}
