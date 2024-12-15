#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

const int MAX_N = 20;
const int MAX_SIZE = (1 << MAX_N);
const long long MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<bitset<MAX_SIZE>> A(2 * N);
    for (int i = 0; i < 2 * N; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < 2 * N; j++) {
            A[i][j] = (s[j] == '1');
        }
    }

    vector<vector<long long>> dp(2 * N, vector<long long>(1 << (2 * N)));
    dp[0][1] = 1;
    for (int i = 1; i < 2 * N; i++) {
        for (int s = 1; s < (1 << (i + 1)); s += 2) {
            if ((s & (1 << i)) == 0) continue;
            for (int j = 0; j < i; j++) {
                if ((s & (1 << j)) == 0) continue;
                if (A[i][j]) {
                    dp[i][s] += dp[i - 1][s ^ (1 << i)] + dp[i - 1][s ^ (1 << i) ^ (1 << j)];
                    dp[i][s] %= MOD;
                }
            }
        }
    }

    cout << dp[2 * N - 1][(1 << (2 * N)) - 1] << endl;

    return 0;
}