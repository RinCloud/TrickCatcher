#include <iostream>
using namespace std;

const int mod = 1000000007;

long long power(long long x, long long y) {
    long long res = 1;
    while (y > 0) {
        if (y & 1)
            res = (res * x) % mod;
        y >>= 1;
        x = (x * x) % mod;
    }
    return res;
}

int main() {
    int N, K;
    cin >> N >> K;

    long long ans = 0;
    for (int i = 1; i <= K; i++) {
        long long count = power(K / i, N);
        long long sub = power(K / (i + 1), N);
        ans = (ans + ((count - sub) % mod) * i) % mod;
    }
    if (ans < 0)
        ans += mod;

    cout << ans << endl;

    return 0;
}