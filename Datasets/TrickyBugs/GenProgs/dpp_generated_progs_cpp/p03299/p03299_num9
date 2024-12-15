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
    dp[0][0] = 1;
    dp[0][1] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= h[i]; j++) {
            if (j < h[i]) {
                dp[i + 1][0] += dp[i][1];
                dp[i + 1][0] %= MOD;
            }
            dp[i + 1][1] += dp[i][0];
            dp[i + 1][1] %= MOD;
            dp[i + 1][1] += dp[i][1];
            dp[i + 1][1] %= MOD;
        }
    }

    cout << dp[N][1] << endl;

    return 0;
}