#include <iostream>
#include <vector>
#include <bitset>
#include <algorithm>
#include <cstdint>

using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<int>> A(2 * N, vector<int>(2 * N));
    
    for (int i = 0; i < 2 * N; i++) {
        for (int j = 0; j < 2 * N; j++) {
            char c;
            cin >> c;
            A[i][j] = c - '0';
        }
    }
    
    vector<int64_t> dp(1 << (2 * N));
    dp[0] = 1;
    
    for (int mask = 0; mask < (1 << (2 * N)); mask++) {
        int cnt_pairs = __builtin_popcount(mask) / 2;
        
        for (int i = 0; i < 2 * N; i++) {
            if (((mask >> i) & 1) == 0) {
                int cnt_pairs_j = __builtin_popcount(mask & ((1 << i) - 1)) / 2;
                
                if (cnt_pairs_j < cnt_pairs) {
                    continue;
                }
                
                for (int j = 0; j < 2 * N; j++) {
                    if (((mask >> j) & 1) == 0 && A[i][j]) {
                        dp[mask | (1 << i) | (1 << j)] += dp[mask];
                    }
                }
            }
        }
    }
    
    cout << dp[(1 << (2 * N)) - 1] << endl;
    
    return 0;
}