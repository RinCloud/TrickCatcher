#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    unsigned long long N;
    cin >> N;

    unsigned long long ans = 0;
    unsigned long long pow2 = 1;
    unsigned long long comb = 1;

    for (int i = 0; i <= 60; i++) {
        if ((N >> i) & 1) {
            ans = (ans + comb * pow2) % MOD;
            pow2 = (pow2 * 2) % MOD;
        }

        comb = (comb * (N % MOD)) % MOD;
        N /= 2;
    }

    cout << ans << endl;
    return 0;
}