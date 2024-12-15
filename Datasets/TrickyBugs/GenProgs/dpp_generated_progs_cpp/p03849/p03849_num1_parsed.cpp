#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

long long power(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1) {
            res = (res * a) % MOD;
        }
        a = (a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int main() {
    long long N;
    cin >> N;

    long long ans = (power(2, N + 1) - 1 + MOD) % MOD;
    cout << ans << endl;

    return 0;
}