#include <iostream>
#include <vector>
using namespace std;

const int mod = 998244353;

vector<int> solve(int K, int N) {
    vector<int> ans(2*K-1, 0);
    
    vector<vector<int>> dp(N+1, vector<int>(2*K+1, 0));
    dp[0][K+1] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 2*K; j++) {
            dp[i][j] = (dp[i][j] + dp[i-1][j]) % mod;
            if (j > 1) dp[i][j] = (dp[i][j] + dp[i-1][j-1]) % mod;
            if (j < 2*K) dp[i][j] = (dp[i][j] + dp[i-1][j+1]) % mod;
        }
    }
    
    for (int i = 1; i <= 2*K-1; i++) {
        for (int j = 1; j <= N; j++) {
            ans[i-1] = (ans[i-1] + dp[j][i]) % mod;
        }
    }
    
    return ans;
}

int main() {
    int K, N;
    cin >> K >> N;
    
    vector<int> ans = solve(K, N);
    
    for (int i = 0; i < 2*K-1; i++) {
        cout << ans[i] << endl;
    }
    
    return 0;
}