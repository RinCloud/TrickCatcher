#include <iostream>
#include <cmath>

const int MOD = 1000000007;

// Function to calculate GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int N, K;
    std::cin >> N >> K;

    // Calculate the sum of GCD over all sequences
    long long sum = 0;
    for (int i = 1; i <= K; i++) {
        // Calculate the number of sequences where A_1 = i
        long long numSeq = pow(K / gcd(K, i), N);
        sum = (sum + numSeq) % MOD;
    }

    std::cout << sum << std::endl;

    return 0;
}