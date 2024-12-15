#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int N, Ma, Mb;
    cin >> N >> Ma >> Mb;
    vector<int> a(N), b(N), c(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    
    vector<vector<vector<int>>> dp(N+1, vector<vector<int>>(401, vector<int>(401, INT_MAX)));
    dp[0][0][0] = 0;
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= 400; j++) {
            for (int k = 0; k <= 400; k++) {
                if (dp[i][j][k] != INT_MAX) {
                    dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
                    dp[i+1][j+a[i]][k+b[i]] = min(dp[i+1][j+a[i]][k+b[i]], dp[i][j][k] + c[i]);
                }
            }
        }
    }
    
    int ans = INT_MAX;
    
    for (int j = 1; j <= 400; j++) {
        for (int k = 1; k <= 400; k++) {
            if (j * Mb == k * Ma) {
                ans = min(ans, dp[N][j][k]);
            }
        }
    }
    
    if (ans == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
    
    return 0;
}