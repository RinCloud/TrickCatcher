#include <iostream>
#include <vector>
using namespace std;

const int mod = 1e9 + 7;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> S(N);
    vector<int> T(M);

    for (int i = 0; i < N; i++) {
        cin >> S[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> T[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
    vector<vector<int>> prefix_sum(N + 1, vector<int>(M + 1, 0));

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            dp[i][j] = prefix_sum[i - 1][j - 1] + (S[i - 1] == T[j - 1] ? 2 * dp[i - 1][j - 1] + 1 : 0);
            prefix_sum[i][j] = (prefix_sum[i - 1][j] + prefix_sum[i][j - 1] - prefix_sum[i - 1][j - 1] + dp[i][j] + mod) % mod;
        }
    }

    cout << prefix_sum[N][M] << endl;

    return 0;
}