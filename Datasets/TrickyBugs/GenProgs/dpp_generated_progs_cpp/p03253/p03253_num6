#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

// Function to calculate factorial modulo MOD
long long factorialMod(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = (fact * i) % MOD; // Take modulo at every step to avoid overflow
    }
    return fact;
}

// Function to calculate modulo inverse of a number
long long modInverse(long long a) {
    long long m = MOD;
    long long m0 = m, t, q;
    long long x0 = 0, x1 = 1;

    if (m == 1) return 0; // Not defined

    // Apply extended Euclidean algorithm
    while (a > 1) {
        // q is quotient
        q = a / m;

        t = m;

        // m is remainder now, process same as
        // Euclid's Algorithm
        m = a % m;
        a = t;

        t = x0;

        x0 = x1 - q * x0;

        x1 = t;
    }

    // Make x1 positive
    if (x1 < 0) x1 += m0;

    return x1;
}

// Function to calculate the number of valid sequences
int numberOfSequences(int n, int m) {
    long long ans = 1;

    // First find the prime factorization of m. It can be proven that
    // for each unique prime factor p, the power of p should divide n
    // to form a valid sequence.
    for (int i = 2; i * i <= m; i++) {
        if (m % i == 0) {
            int count = 0;

            // Count the number of occurences of each prime factor
            while (m % i == 0) {
                m /= i;
                count++;
            }

            // Update the answer using the formula:
            // ans = ans * (n + count - 1)C(count) % MOD
            ans = (ans * factorialMod(n + count - 1) % MOD * modInverse(factorialMod(count)) % MOD) % MOD;
        }
    }

    // If m is a prime number
    if (m > 1) {
        // Update the answer using the formula:
        // ans = ans * (n + 1 - 1)C(1) % MOD
        ans = (ans * factorialMod(n + 1 - 1) % MOD * modInverse(factorialMod(1)) % MOD) % MOD;
    }

    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    cout << numberOfSequences(n, m) << endl;
    return 0;
}