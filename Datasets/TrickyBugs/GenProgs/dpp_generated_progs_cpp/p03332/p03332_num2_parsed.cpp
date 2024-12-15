#include <iostream>

using namespace std;

const int MOD = 998244353;

long long pow_mod(long long x, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        n >>= 1;
    }
    return res;
}

int main() {
    int N, A, B;
    long long K;
    cin >> N >> A >> B >> K;

    long long ans = 0;

    for (int i = 0; i <= N; i++) {
        long long x = K - 1LL * A * i;
        if (x < 0 || x % B != 0) {
            continue;
        }
        long long j = x / B;
        if (j > N) {
            continue;
        }

        long long d = i + j;
        long long m = 1;
        for (int k = 1; k <= N; k++) {
            m = (m * k) % MOD;
        }
        m = pow_mod(m, MOD - 2);

        for (int k = 0; k <= N; k++) {
            long long c = 1;
            if (k < i) {
                c = (c * i) % MOD;
            }
            if (k < j) {
                c = (c * j) % MOD;
            }
            if (N - k < d) {
                c = (c * (N - d + k)) % MOD;
            }
            ans = (ans + (c * m) % MOD) % MOD;
            m = (m * (N - k)) % MOD;
            m = (m * pow_mod(N - k - d + MOD, MOD - 2)) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}