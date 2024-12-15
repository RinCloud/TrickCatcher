#include <iostream>
#include <vector>

const int MOD = 1000000007;

// Function to calculate the factorial of a number
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result = (result * i) % MOD;
    }
    return result;
}

// Function to calculate the power of a number
int power(int x, int y) {
    int res = 1;
    while (y > 0) {
        if (y & 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}

// Function to calculate the modular inverse of a number
int modInverse(int n) {
    return power(n, MOD - 2);
}

// Function to calculate the sum of costs of all possible arrangements
int sumOfPossibleArrangements(int N, int M, int K) {
    // Calculate the number of ways to choose K squares
    int numWays = (factorial(N * M) * modInverse(factorial(N * M - K))) % MOD;
    
    // Calculate the sum of costs of all possible arrangements
    int sum = 0;
    for (int dx = 0; dx < N; ++dx) {
        for (int dy = 0; dy < M; ++dy) {
            int cost = (dx * (N - dx) % MOD) * M % MOD; // Contribution from x_i
            cost = (cost + (dy * (M - dy) % MOD) * N % MOD) % MOD; // Contribution from y_i
            sum = (sum + cost) % MOD;
        }
    }
    
    // Multiply the sum by the number of ways to choose K squares
    sum = (sum * numWays) % MOD;
    
    return sum;
}

int main() {
    int N, M, K;
    std::cin >> N >> M >> K;
    
    int sum = sumOfPossibleArrangements(N, M, K);
    std::cout << sum << std::endl;
    
    return 0;
}
