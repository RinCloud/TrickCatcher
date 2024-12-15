#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    
    string S;
    cin >> S;
    
    vector<pair<int, int>> ranges;
    for (int i = 0; i < M; i++) {
        int l, r;
        cin >> l >> r;
        ranges.emplace_back(l, r);
    }
    
    vector<vector<int>> dp(N, vector<int>(N, 0));
    for (int i = N - 1; i >= 0; i--) {
        for (int j = i; j < N; j++) {
            if (i < j) {
                dp[i][j] = dp[i + 1][j];
            } else {
                dp[i][j] = 1;
            }
            
            for (auto& range : ranges) {
                if (range.first - 1 >= i && range.second - 1 <= j) {
                    dp[i][j] = (dp[i][j] + dp[range.first - 1][range.second - 1]) % MOD;
                }
            }
        }
    }
    
    int result = dp[0][N - 1];
    cout << result << endl;
    
    return 0;
}