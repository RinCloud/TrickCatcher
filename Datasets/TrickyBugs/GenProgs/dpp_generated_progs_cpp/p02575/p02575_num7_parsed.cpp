#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int H, W;
    cin >> H >> W;
    
    vector<pair<int, int>> restrictions(H);
    for (int i = 0; i < H; i++) {
        cin >> restrictions[i].first >> restrictions[i].second;
    }
    
    vector<int> dp(W+1, 1e9); // Minimum number of moves to reach each square
    dp[1] = 0;
    
    for (int i = 1; i <= H; i++) {
        int minMoves = dp[restrictions[i-1].second];
        for (int j = restrictions[i-1].first; j <= restrictions[i-1].second; j++) {
            minMoves = min(minMoves, dp[j]);
        }
        
        for (int j = 1; j <= W; j++) {
            dp[j] = min(dp[j], minMoves + abs(j - restrictions[i-1].second) + 1);
        }
    }
    
    for (int i = 1; i <= H; i++) {
        if (dp[W] == 1e9) {
            cout << -1 << endl;
        } else {
            cout << dp[W] << endl;
        }
    }
    
    return 0;
}