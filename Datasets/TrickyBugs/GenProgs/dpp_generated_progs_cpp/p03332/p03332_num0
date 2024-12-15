#include <iostream>
using namespace std;

const int MOD = 998244353;

long long powMod(long long a, long long n) {
    long long res = 1;
    while (n > 0) {
        if (n & 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        n >>= 1;
    }
    return res;
}

long long comb(int n, int k) {
    long long res = 1;
    for (int i = 1; i <= k; i++) {
        res = (res * (n - i + 1)) % MOD;
        res = (res * powMod(i, MOD - 2)) % MOD;
    }
    return res;
}

int main() {
    int N, A, B;
    long long K;
    cin >> N >> A >> B >> K;

    long long ans = 0;

    for (int a = 0; a <= N; a++) {
        if (K - a * A < 0) {
            break;
        }
        if ((K - a * A) % B == 0) {
            int b = (K - a * A) / B;
            if (b <= N) {
                long long combAB = (comb(N, a) * comb(N, b)) % MOD;
                ans = (ans + combAB) % MOD;
            }
        }
    }

    cout << ans << endl;

    return 0;
}