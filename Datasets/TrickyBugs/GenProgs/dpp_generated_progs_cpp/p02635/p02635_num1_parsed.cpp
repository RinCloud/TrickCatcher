#include <iostream>
#include <vector>
using namespace std;

const unsigned int MOD = 998244353;

// Function to calculate the factorial of a number
unsigned int factorial(unsigned int n) {
    unsigned int fact = 1;
    for (unsigned int i = 2; i <= n; i++) {
        fact = (fact * i) % MOD;
    }
    return fact;
}

// Function to calculate the power of a number
unsigned int power(unsigned int base, unsigned int exp) {
    unsigned int result = 1;
    while (exp > 0) {
        if (exp & 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

// Function to calculate the binomial coefficient (n choose k)
unsigned int binomial_coefficient(unsigned int n, unsigned int k) {
    unsigned int numerator = factorial(n);
    unsigned int denominator = (factorial(k) * factorial(n - k)) % MOD;
    unsigned int inverse_denominator = power(denominator, MOD - 2);
    return (numerator * inverse_denominator) % MOD;
}

int main() {
    string S;
    unsigned int K;
    cin >> S >> K;

    unsigned int n = S.size();
    unsigned int num_ones = 0;
    unsigned int result = 1;

    // Count the number of ones in the string
    for (char c : S) {
        if (c == '1') {
            num_ones++;
        }
    }

    // Calculate the number of strings
    // after applying the operation 0 to K times
    for (unsigned int k = 0; k <= K; k++) {
        unsigned int additional_ones = num_ones + k;
        unsigned int additional_zeros = n - additional_ones;
        unsigned int current_result = binomial_coefficient(additional_ones + additional_zeros, additional_ones);

        result = (result + current_result) % MOD;
    }

    cout << result << endl;

    return 0;
}
