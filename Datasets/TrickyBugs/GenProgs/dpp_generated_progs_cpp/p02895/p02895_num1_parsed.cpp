#include <iostream>
#include <vector>
using namespace std;

int N;
vector<vector<int>> A;
vector<long long> dp;
const long long MOD = 998244353;

long long solve(int mask) {
    if (mask == (1 << (2 * N)) - 1) {
        return 1;
    }
    if (dp[mask] != -1) {
        return dp[mask];
    }

    int i = __builtin_popcount(mask) / 2;
    int res = 0;
    for (int j = i + 1; j < 2 * N; j++) {
        if ((mask & (1 << j)) == 0 && A[i][j]) {
            for (int k = j + 1; k < 2 * N; k++) {
                if ((mask & (1 << k)) == 0 && A[j][k]) {
                    res += solve(mask | (1 << i) | (1 << j) | (1 << k));
                    res %= MOD;
                }
            }
            break;
        }
    }

    return dp[mask] = res;
}

int main() {
    cin >> N;
    A.resize(2 * N, vector<int>(2 * N));
    for (int i = 0; i < 2 * N; i++) {
        for (int j = 0; j < 2 * N; j++) {
            char c;
            cin >> c;
            A[i][j] = c - '0';
        }
    }

    dp.resize(1 << (2 * N), -1);
    long long ans = solve(0);
    cout << ans << endl;

    return 0;
}