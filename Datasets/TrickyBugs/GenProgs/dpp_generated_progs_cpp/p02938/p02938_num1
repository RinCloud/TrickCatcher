#include <iostream>
#include <cmath>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    long long L, R;
    cin >> L >> R;

    long long ans = 0;
    for (int i = 62; i >= 0; i--) {
        if ((R >> i) & 1) {
            long long cnt = (R - L + 1) >> (i + 1);
            if (L & ((long long)1 << i))
                cnt++;
            else if (L <= (L ^ ((long long)1 << i)))
                cnt++;

            ans = (ans + (((((long long)1 << i) % MOD) * cnt) % MOD)) % MOD;
        }
    }

    cout << ans << endl;

    return 0;
}