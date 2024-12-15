#include <iostream>

// Define the modulo value
const int MOD = 1000000007;

// Define a function to calculate the modular exponential
int modPow(int x, int y) {
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

int main() {
    // Read the input values
    int N, K;
    std::cin >> N >> K;

    // Calculate the result
    int result;
    if (N == 1) {
        result = K;
    } else if (N == 2) {
        result = K * (K - 1);
    } else {
        result = K * (K - 1) % MOD * modPow(K - 2, (N - 3) / 2) % MOD;
    }

    // Print the result
    std::cout << result << std::endl;

    return 0;
}