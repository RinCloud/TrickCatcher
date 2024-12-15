#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

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
    vector<vector<int>> prev(N + 1, vector<int>(M + 1, 0));
    dp[0][0] = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            if (S[i - 1] == T[j - 1]) {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i][j - 1] + dp[i - 1][j]) % MOD;
            } else {
                dp[i][j] = (dp[i][j - 1] + dp[i - 1][j]) % MOD;
            }
        }
    }
    
    cout << dp[N][M] << endl;
    
    return 0;
}