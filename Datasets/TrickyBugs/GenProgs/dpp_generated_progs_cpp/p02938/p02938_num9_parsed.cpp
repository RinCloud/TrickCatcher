#include <iostream>
using namespace std;

const int MOD = 1000000007;

int main() {
    long long L, R;
    cin >> L >> R;

    long long ans = 0;
    for (long long x = L; x <= R; x++) {
        for (long long y = x; y <= R; y++) {
            if ((y % x) == (y ^ x)) {
                ans = (ans + 1) % MOD;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
