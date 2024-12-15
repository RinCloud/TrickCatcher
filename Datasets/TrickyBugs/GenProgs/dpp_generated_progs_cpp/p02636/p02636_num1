#include <iostream>
#include <vector>
#include <algorithm>

#define MOD 998244353

using namespace std;

int main() {
    string S;
    cin >> S;

    int N = S.size();
    vector<int> dp(N + 1, 0);

    dp[0] = 1;

    for (int i = 1; i <= N; i++) {
        if (S[i - 1] == '1') {
            dp[i] = (2 * dp[i - 1]) % MOD;
        } else {
            dp[i] = dp[i - 1];
            if (i > 1 && S[i - 2] == '0') {
                dp[i] = (dp[i] + dp[i - 2]) % MOD;
            }
        }
    }

    cout << dp[N] << endl;

    return 0;
}