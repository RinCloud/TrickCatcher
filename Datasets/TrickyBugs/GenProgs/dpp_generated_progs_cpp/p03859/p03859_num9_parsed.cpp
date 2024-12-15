#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;
    string S;
    cin >> S;
    vector<vector<int>> Q(M, vector<int>(2));
    for (int i = 0; i < M; i++) {
        cin >> Q[i][0] >> Q[i][1];
    }
    
    vector<int> dp(N + 1);
    dp[N] = 1;
    for (int i = N - 1; i >= 0; i--) {
        dp[i] = dp[i + 1];
        for (int j = 0; j < M; j++) {
            if (Q[j][0] > i) {
                continue;
            }
            int cnt = 0;
            for (int k = Q[j][0] - 1; k < Q[j][1]; k++) {
                if (S[k] == '1') {
                    cnt++;
                }
            }
            if (cnt == Q[j][1] - Q[j][0] + 1) {
                dp[i] = (dp[i] + dp[Q[j][1] + 1]) % MOD;
            }
        }
    }
    
    cout << dp[0] << endl;
    
    return 0;
}