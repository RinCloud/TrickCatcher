#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int N, Ma, Mb;
    cin >> N >> Ma >> Mb;
    vector<int> a(N);
    vector<int> b(N);
    vector<int> c(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    
    int max_cost = 1e9;
    vector<vector<vector<int>>> dp(N + 1, vector<vector<int>>(401, vector<int>(401, max_cost)));
    dp[0][0][0] = 0;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= 400; j++) {
            for (int k = 0; k <= 400; k++) {
                dp[i][j][k] = dp[i - 1][j][k];
                if (j - a[i - 1] >= 0 && k - b[i - 1] >= 0) {
                    dp[i][j][k] = min(dp[i][j][k], dp[i - 1][j - a[i - 1]][k - b[i - 1]] + c[i - 1]);
                }
            }
        }
    }
    
    int min_cost = INT_MAX;
    for (int j = 1; j <= 400; j++) {
        for (int k = 1; k <= 400; k++) {
            if (j * Mb == k * Ma) {
                min_cost = min(min_cost, dp[N][j][k]);
            }
        }
    }
    
    if (min_cost == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min_cost << endl;
    }
    
    return 0;
}