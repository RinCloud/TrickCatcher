#include <iostream>
#include <cmath>

using namespace std;

const long long MOD = 1e9 + 7;

long long power(long long base, long long exp) {
    long long result = 1;
    while (exp) {
        if (exp & 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exp >>= 1;
    }
    return result;
}

int main() {
    long long N, K;
    cin >> N >> K;

    long long ans = 0;
    if (N == 1) {
        ans = K;
    } else if (N == 2) {
        ans = K * (K - 1) % MOD;
    } else {
        ans = K * (K - 1) % MOD * power(K - 2, N - 2) % MOD;
    }

    cout << ans << endl;

    return 0;
}