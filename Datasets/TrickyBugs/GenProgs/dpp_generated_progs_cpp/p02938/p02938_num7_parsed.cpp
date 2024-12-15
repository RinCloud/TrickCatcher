#include <iostream>
#include <vector>

#define MOD 1000000007

using namespace std;

long long power(long long base, long long exponent, long long modulus) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1)
            result = (result * base) % modulus;
        base = (base * base) % modulus;
        exponent /= 2;
    }
    return result;
}

int main() {
    long long L, R;
    cin >> L >> R;

    long long ans = 0;
    for (int i = 0; i < 60; i++) {
        long long bit = 1LL << i;

        long long cnt = (R - L + 1) / (2 * bit);
        cnt *= bit;
        if ((R - L + 1) % (2 * bit) - bit > 0)
            cnt += (R - L + 1) % (2 * bit) - bit;

        if (cnt % 2 == 1)
            ans += power(2, i, MOD);
    }

    cout << ans % MOD << endl;

    return 0;
}