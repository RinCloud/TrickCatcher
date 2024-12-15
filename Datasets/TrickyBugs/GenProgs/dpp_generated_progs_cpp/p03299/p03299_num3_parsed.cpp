#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;
    
    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }
    
    vector<vector<int>> dp(N, vector<int>(2));
    dp[0][0] = 1;
    dp[0][1] = 1;
    
    for (int i = 1; i < N; i++) {
        if (h[i] >= h[i-1]) {
            dp[i][0] = (dp[i-1][0] + dp[i-1][1]) % MOD;
        }
        if (h[i] <= h[i-1]) {
            dp[i][1] = (dp[i-1][0] + dp[i-1][1]) % MOD;
        }
    }
    
    int result = (dp[N-1][0] + dp[N-1][1]) % MOD;
    cout << result << endl;
    
    return 0;
}