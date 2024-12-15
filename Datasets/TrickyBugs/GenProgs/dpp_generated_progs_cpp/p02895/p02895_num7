#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<bitset<40>> A(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        string s;
        cin >> s;
        A[i] = bitset<40>(s);
    }

    vector<long long> dp(1 << (2 * N));
    dp[0] = 1;
    for (int mask = 1; mask < (1 << (2 * N)); mask++) {
        int i = __builtin_popcount(mask) - 1;
        int j = i + 1;

        while (j < 2 * N && ((mask >> j) & 1) == 0) {
            j++;
        }

        for (int k = i + 1; k < j; k++) {
            if ((A[i][k] || A[k][i]) && (__builtin_popcount(mask ^ (1 << i) ^ (1 << k)) % 2) == 0) {
                dp[mask] += dp[mask ^ (1 << i) ^ (1 << k)];
            }
        }
    }

    cout << dp[(1 << (2 * N)) - 1] << endl;

    return 0;
}