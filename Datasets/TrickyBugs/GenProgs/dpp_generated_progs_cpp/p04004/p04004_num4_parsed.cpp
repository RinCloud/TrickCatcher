#include <iostream>
using namespace std;

const int MOD = 1000000007;

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

int main() {
    int N, M, K;
    cin >> N >> M >> K;
    
    long long ans = 0;
    long long fac = 1;
    long long inv = 1;
    
    for (int i = 1; i <= N + M + K; i++) {
        fac = (fac * i) % MOD;
        inv = (inv * power(i, MOD - 2)) % MOD;
    }
    
    for (int i = 0; i <= N + M + K - 1; i++) {
        long long tmp = (3 * power(2, N + M + K - 1 - i)) % MOD;
        tmp = (tmp * fac) % MOD;
        tmp = (tmp * inv) % MOD;
        ans = (ans + tmp) % MOD;
        fac = (fac * (N + M + K - i)) % MOD;
        inv = (inv * power(N + M + K - i - 1, MOD - 2)) % MOD;
    }
    
    cout << ans << endl;
    
    return 0;
}