#include <iostream>
#include <vector>
#define MOD 1000000007

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> h(N);
    for (int i = 0; i < N; i++) {
        cin >> h[i];
    }

    vector<vector<long long>> dp(N + 1, vector<long long>(2, 0));
    dp[0][0] = dp[0][1] = 1;

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l < 2; l++) {
                    if (h[i - 1] - (j + k) >= 0 && h[i] - (k + l) >= 0 && h[i - 1] - (j + k) <= 1 && h[i] - (k + l) <= 1) {
                        dp[i][l] = (dp[i][l] + dp[i - 1][j]) % MOD;
                    }
                }
            }
        }
    }

    cout << (dp[N][0] + dp[N][1]) % MOD << endl;

    return 0;
}