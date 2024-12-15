#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, K;
    cin >> N >> K;
    string s;
    cin >> s;

    vector<vector<int>> dp(K + 1, vector<int>(N + 1, 0));
    dp[0][0] = 1;

    for (int i = 0; i < K; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= j; k++) {
                if (s[i] == 'r' || (s[i] == 'b' && k == j)) {
                    dp[i + 1][j] += dp[i][k];
                    dp[i + 1][j] %= MOD;
                }
            }
        }
    }

    int result = 0;
    for (int j = 0; j <= N; j++) {
        result += dp[K][j];
        result %= MOD;
    }

    cout << result << endl;

    return 0;
}