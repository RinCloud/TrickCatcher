#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> S(N);
    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    vector<int> T(M);
    for (int i = 0; i < M; i++) {
        cin >> T[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    vector<unordered_map<int, int>> indexMapS(N);
    vector<unordered_map<int, int>> indexMapT(M);
    
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            dp[i + 1][j + 1] = (dp[i][j + 1] + dp[i + 1][j] - dp[i][j] + MOD) % MOD;
            
            if (S[i] == T[j]) {
                int add = (dp[i][j] + 1) % MOD;
                if (indexMapT[j].count(S[i])) {
                    add = (add - dp[indexMapT[j][S[i]] - 1][j] + MOD) % MOD;
                }
                if (indexMapS[i].count(S[i])) {
                    add = (add - dp[i][indexMapS[i][S[i]] - 1] + MOD) % MOD;
                }
                if (indexMapS[i].count(S[i]) && indexMapT[j].count(S[i])) {
                    add = (add + dp[indexMapT[j][S[i]] - 1][indexMapS[i][S[i]] - 1]) % MOD;
                }
                dp[i + 1][j + 1] = (dp[i + 1][j + 1] + add) % MOD;
            }
            
            indexMapS[i][S[i]] = i + 1;
            indexMapT[j][T[j]] = j + 1;
        }
    }

    cout << dp[N][M] << endl;

    return 0;
}