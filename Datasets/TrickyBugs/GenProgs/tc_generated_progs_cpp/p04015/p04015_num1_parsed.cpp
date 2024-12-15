#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 50;
const int MAX_X = 50;
const int MAX_SUM = 50 * MAX_N;

int n, a;
long long ans, dp[MAX_N + 1][MAX_SUM + 1];
int x[MAX_N];

int main() {
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }

    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j >= 0; j--) {
            for (int k = MAX_SUM; k >= x[i]; k--) {
                dp[j + 1][k] += dp[j][k - x[i]];
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < MAX_SUM + 1; j++) {
            if (j * i == a * n) {
                ans += dp[i][j];
            }
        }
    }

    cout << ans << endl;

    return 0;
}
