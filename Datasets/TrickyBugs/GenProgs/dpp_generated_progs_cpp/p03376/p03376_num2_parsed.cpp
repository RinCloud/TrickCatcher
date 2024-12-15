#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;

    vector<int> m(N+1), p(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> m[i] >> p[i];
    }

    vector<vector<long long>> dp(N+1, vector<long long>(X+1, -1));
    dp[1][0] = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= X; j++) {
            if (dp[i][j] >= 0) {
                long long num = dp[i][j] / m[i];
                dp[i][j] %= m[i];

                if (i < N) {
                    int c_i = num;
                    int limit = min(num + D, c_i + (X-j)/m[i]);
                    for (int k = c_i; k <= limit; k++) {
                        dp[i+1][j+k*m[i]] = max(dp[i+1][j+k*m[i]], dp[i][j] + k);
                    }
                }

                if (i > 1 && p[i] == 1) {
                    int c_i = num + 1;
                    int limit = min(num + D, c_i + (X-j)/m[1]);
                    for (int k = c_i; k <= limit; k++) {
                        dp[i+1][j+(k-c_i)*m[1]] = max(dp[i+1][j+(k-c_i)*m[1]], dp[i][j] + k);
                    }
                }
            }
        }
    }

    long long ans = 0;
    for (int j = 0; j <= X; j++) {
        ans = max(ans, dp[N][j]);
    }
    
    cout << ans << endl;

    return 0;
}