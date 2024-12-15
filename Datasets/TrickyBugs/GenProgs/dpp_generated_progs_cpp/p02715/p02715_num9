#include <iostream>
using namespace std;

const int mod = 1000000007;

// Function to calculate gcd
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate power modulo
int powerMod(int x, int y, int mod) {
    int res = 1;
    x = x % mod;

    while (y > 0) {
        if (y & 1)
            res = (res * x) % mod;

        y = y >> 1;
        x = (x * x) % mod;
    }
    return res;
}

int main() {
    int N, K;
    cin >> N >> K;

    // Calculating K^N % mod
    int len = powerMod(K, N, mod);

    // Calculate sum of GCD over all K^N sequences
    int sum = 0;
    for (int i = 1; i <= K; i++) {
        // Calculate contribution of each factor
        int count = powerMod(K / gcd(i, K), N, mod);
        sum = (sum + count) % mod;
    }
    
    // Multiply sum by len and take mod to get the result
    int result = (sum * len) % mod;

    cout << result << endl;

    return 0;
}