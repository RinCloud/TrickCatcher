#include <iostream>
using namespace std;

const int MOD = 1000000007;

long long power(long long x, long long y) {
    long long res = 1;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % MOD;
        y = y >> 1;
        x = (x * x) % MOD;
    }
    return res;
}

int main() {
    int N, K;
    cin >> N >> K;

    long long ans = 0;
    for (int i = 1; i <= K; i++) {
        long long count = power(K / i, N);
        for (int j = 2 * i; j <= K; j += i) {
            count = (count - power(K / j, N) + MOD) % MOD;
        }
        ans = (ans + i * count) % MOD;
    }

    cout << ans << endl;
    return 0;
}