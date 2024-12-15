#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1000000007;

// Function to calculate power(a, b) modulo MOD
long long power(long long a, long long b) {
    long long result = 1;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % MOD;
        }
        a = (a * a) % MOD;
        b = b / 2;
    }
    return result;
}

// Function to calculate modular inverse of a modulo MOD
long long modInverse(long long a) {
    return power(a, MOD - 2);
}

// Function to calculate nCr modulo MOD
long long nCr(long long n, long long r) {
    long long res = 1;
    for (long long i = 0; i < r; i++) {
        res = (res * (n - i)) % MOD;
        res = (res * modInverse(i + 1)) % MOD;
    }
    return res;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    // Calculate the total number of strings
    long long totalStrings = power(2, N);

    // Calculate the number of invalid strings
    long long invalidStrings = nCr(N, A) + nCr(N, B);

    // Calculate the number of valid strings
    long long validStrings = (totalStrings - invalidStrings + MOD) % MOD;

    cout << validStrings << endl;

    return 0;
}