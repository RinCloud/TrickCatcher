#include <iostream>
#include <vector>
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

    if (K == 1) {
        cout << 0 << endl;
        return 0;
    }

    long long result = 0;

    for (int d = 1; d <= N; d++) {
        long long num = (power(d, 2) - power(d - 1, 2)) % MOD;
        num = (num * M) % MOD;
        num = (num * M) % MOD;
        num = (num * (N - d + 1)) % MOD;
        num = (num * (N - d + 1)) % MOD;
        result = (result + num) % MOD;
    }

    for (int d = 1; d <= M; d++) {
        long long num = (power(d, 2) - power(d - 1, 2)) % MOD;
        num = (num * N) % MOD;
        num = (num * N) % MOD;
        num = (num * (M - d + 1)) % MOD;
        num = (num * (M - d + 1)) % MOD;
        result = (result + num) % MOD;
    }

    result = (result * power(2, MOD - 2)) % MOD;

    if (K > 2) {
        long long denom = power(2, K);
        denom = (denom - K) % MOD;
        denom = (denom * power(K - 1, MOD - 2)) % MOD;
        result = (result * denom) % MOD;
    }

    cout << result << endl;

    return 0;
}