#include <iostream>

using namespace std;

const long long MOD = 1000000007;

// Function to calculate the power of a number modulo MOD
long long power(long long base, long long exponent) {
    long long result = 1;
    
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        
        base = (base * base) % MOD;
        exponent /= 2;
    }
    
    return result;
}

// Function to calculate the number of pairs modulo MOD
long long calculatePairs(long long N) {
    long long cnt = 0;
    
    // Count the number of bits in N
    int bits = 0;
    long long temp = N;
    while (temp > 0) {
        bits++;
        temp /= 2;
    }
    
    // Loop through all possible values of u
    for (int i = 0; i < bits; i++) {
        long long u = (1LL << i);
        
        // Calculate the number of possible values of v for each u
        long long v = min(u + u - 1, N - u + 1);
        cnt = (cnt + v) % MOD;
    }
    
    return cnt;
}

int main() {
    long long N;
    cin >> N;
    
    long long result = calculatePairs(N);
    cout << result << endl;
    
    return 0;
}