#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

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
    vector<vector<int>> last_occurrence(N + 1, vector<int>(M + 1, 0));
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            dp[i][j] += dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
            if (S[i - 1] == T[j - 1]) {
                dp[i][j] += last_occurrence[i - 1][j - 1] + 1;
            }
            dp[i][j] %= MOD;
            
            last_occurrence[i][j] = (dp[i - 1][j - 1] + last_occurrence[i - 1][j] + last_occurrence[i][j - 1] - last_occurrence[i - 1][j - 1] + MOD) % MOD;
        }
    }
    
    cout << dp[N][M] + 1 << endl;
    
    return 0;
}