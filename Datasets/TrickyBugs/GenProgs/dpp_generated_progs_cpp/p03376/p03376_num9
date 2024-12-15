#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X, D;
    cin >> N >> X >> D;
    
    vector<int> m(N+1);
    vector<int> p(N+1);
    for (int i = 1; i <= N; i++) {
        cin >> m[i] >> p[i];
    }
    
    vector<vector<long long>> dp(N+1, vector<long long>(2*X+1, -1));
    dp[0][X] = 0;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= 2*X; j++) {
            if (dp[i-1][j] >= 0) {
                for (int k = max(0, j+m[i]-D); k <= j+m[i]+D && k <= 2*X; k++) {
                    dp[i][k] = max(dp[i][k], dp[i-1][j] + (k-X)/m[i]);
                }
            }
        }
    }
    
    long long ans = 0;
    for (int i = 0; i <= 2*X; i++) {
        ans = max(ans, dp[N][i]);
    }
    
    cout << ans << endl;
    
    return 0;
}