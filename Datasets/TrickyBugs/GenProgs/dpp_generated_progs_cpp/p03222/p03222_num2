#include <iostream>
#include <vector>
using namespace std;

int main() {
    int H, W, K;
    cin >> H >> W >> K;
    
    vector<vector<long long>> dp(H + 1, vector<long long>(W + 2));
    dp[0][1] = 1;
    const int MOD = 1000000007;
    
    for (int i = 0; i < H; i++) {
        for (int j = 1; j <= W; j++) {
            dp[i + 1][j] = (dp[i][j - 1] + dp[i][j] + dp[i][j + 1]) % MOD;
        }
    }
    
    cout << dp[H][K] << endl;
    
    return 0;
}