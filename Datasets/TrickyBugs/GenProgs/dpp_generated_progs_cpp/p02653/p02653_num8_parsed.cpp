#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    vector<int> dp(N + 1);

    dp[0] = 1;

    for (int i = 0; i <= N; i++) {
        if (i + A <= N) {
            dp[i + A] = (dp[i + A] + dp[i]) % MOD;
        }
        if (i + B <= N) {
            dp[i + B] = (dp[i + B] + dp[i]) % MOD;
        }
    }

    cout << dp[N] << endl;

    return 0;
}