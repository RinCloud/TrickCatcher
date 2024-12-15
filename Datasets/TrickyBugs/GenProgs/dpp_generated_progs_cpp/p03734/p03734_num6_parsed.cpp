#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, W;
    cin >> N >> W;
    
    vector<int> weights(N);
    vector<int> values(N);
    
    for (int i = 0; i < N; i++) {
        cin >> weights[i] >> values[i];
    }
    
    vector<vector<long long>> dp(N + 1, vector<long long>(W + 1, 0));
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= W; j++) {
            dp[i][j] = dp[i - 1][j]; // ignore the i-th item
            
            if (j >= weights[i - 1]) { // consider the i-th item
                dp[i][j] = max(dp[i][j], dp[i - 1][j - weights[i - 1]] + values[i - 1]);
            }
        }
    }
    
    cout << dp[N][W] << endl;
    
    return 0;
}