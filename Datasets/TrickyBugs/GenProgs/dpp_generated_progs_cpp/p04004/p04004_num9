#include <iostream>
#define MOD 1000000007
using namespace std;

long long power(long long x, long long y) {
    long long res = 1;
    while (y > 0) {
        if (y & 1) {
            res = (res * x) % MOD;
        }
        x = (x * x) % MOD;
        y = y >> 1;
    }
    return res;
}

int main() {
    int N, M, K;
    cin >> N >> M >> K;

    long long ans = power(3, N + M + K);
    ans = (ans - (power(3, N) + power(3, M) + power(3, K)) % MOD + MOD) % MOD;
    cout << ans << endl;

    return 0;
}