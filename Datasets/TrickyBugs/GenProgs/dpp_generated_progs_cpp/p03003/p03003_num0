#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> S(N);
    for(int i = 0; i < N; i++) {
        cin >> S[i];
    }

    vector<int> T(M);
    for(int i = 0; i < M; i++) {
        cin >> T[i];
    }

    vector<vector<int>> dp(N+1, vector<int>(M+1, 0));
    dp[0][0] = 1;

    for(int i = 0; i <= N; i++) {
        for(int j = 0; j <= M; j++) {
            if(i > 0) {
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= MOD;
            }
            if(j > 0) {
                dp[i][j] += dp[i][j-1];
                dp[i][j] %= MOD;
            }
            if(i > 0 && j > 0 && S[i-1] == T[j-1]) {
                dp[i][j] += dp[i-1][j-1];
                dp[i][j] %= MOD;
            }
        }
    }

    cout << dp[N][M] << endl;

    return 0;
}