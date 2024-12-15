#include <iostream>
using namespace std;

const long long MOD = 1000000007;

// Function to calculate (a xor b) and (a + b)
pair<long long, long long> calculate(long long n) {
    // If n is even
    if (n % 2 == 0) {
        // Calculate number of pairs
        long long u = n / 2;
        long long v = (n / 2) % MOD;

        return make_pair(u, v);
    } 
    else {
        // Calculate number of pairs
        long long u = (n + 1) / 2;
        long long v = ((n + 1) / 2 + 1) % MOD;

        return make_pair(u, v);
    }
}

int main() {
    // Read the input
    long long N;
    cin >> N;

    // Calculate number of pairs
    pair<long long, long long> result = calculate(N);
    cout << (result.first * result.second) % MOD << endl;

    return 0;
}