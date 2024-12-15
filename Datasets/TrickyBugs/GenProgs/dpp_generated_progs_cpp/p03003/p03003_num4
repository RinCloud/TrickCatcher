#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<int> S(N), T(M);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> T[i];
    }
    
    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    vector<vector<int>> prefix(N + 1, vector<int>(M + 1, 0));
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (S[i - 1] == T[j - 1]) {
                dp[i][j] = (prefix[i - 1][j - 1] + 1) % MOD;
            }
            prefix[i][j] = (prefix[i][j - 1] + dp[i][j]) % MOD;
        }
    }
    
    int ans = 0;
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= M; j++) {
            ans = (ans + dp[i][j]) % MOD;
        }
    }
    
    cout << ans << endl;
    
    return 0;
}