#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    long long L, R;
    cin >> L >> R;

    long long count = 0;
    long long pow2 = 1;
    for (int i = 0; i < 63; i++) {
        long long mask = (1LL << (i + 1)) - 1;
        long long upper = (R & mask) + 1;
        long long lower = (L & mask) + 1;
        count += (((upper * (upper - 1) / 2) % MOD) - ((lower * (lower - 1) / 2) % MOD) + MOD) % MOD * pow2 % MOD;
        count %= MOD;
        pow2 = (pow2 * 2) % MOD;
    }

    cout << count << endl;

    return 0;
}