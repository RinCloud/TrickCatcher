#include<iostream>
#include<vector>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<int> A(H);
    vector<int> B(H);
    
    for(int i = 0; i < H; i++) {
        cin >> A[i] >> B[i];
    }
    
    vector<vector<int>> dp(H+1, vector<int>(W+1, INT_MAX));
    dp[1][1] = 0;
    
    for(int i = 1; i <= H; i++) {
        for(int j = 1; j <= W; j++) {
            if(i == 1 && j == 1) {
                continue;
            }
            if(j >= A[i-1] && j <= B[i-1]) {
                continue;
            }
            int prevRow = i - 1;
            if(prevRow >= 1 && dp[prevRow][j] != INT_MAX) {
                dp[i][j] = min(dp[i][j], dp[prevRow][j] + 1);
            }
            int prevCol = j - 1;
            if(prevCol >= 1 && dp[i][prevCol] != INT_MAX) {
                dp[i][j] = min(dp[i][j], dp[i][prevCol] + 1);
            }
        }
    }
    
    for(int i = 1; i <= H; i++) {
        if(dp[i][W] == INT_MAX) {
            cout << -1 << endl;
        } else {
            cout << dp[i][W] << endl;
        }
    }
    
    return 0;
}