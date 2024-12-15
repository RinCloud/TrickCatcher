#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
const int MAXN = 40;
int A[MAXN][MAXN];
ll dp[1 << MAXN];

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < 2 * N; i++) {
        for (int j = 0; j < 2 * N; j++) {
            char c;
            cin >> c;
            A[i][j] = c - '0';
        }
    }

    dp[0] = 1;
    for (int mask = 1; mask < (1 << (2 * N)); mask++) {
        int u = __builtin_popcount(mask);
        for (int v = 0; v < 2 * N; v++) {
            if (A[u-1][v] && (mask & (1 << v))) {
                dp[mask] += dp[mask ^ (1 << v)];
            }
        }
    }

    cout << dp[(1 << (2 * N)) - 1] << endl;

    return 0;
}