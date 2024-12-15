#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    // calculate the number of ways to form each prefix of the string
    vector<int> dp(N + 1);
    dp[0] = 1;

    for (int i = 1; i <= N; i++) {
        dp[i] = dp[i - 1];
        if (i >= A) {
            dp[i] += dp[i - A];
            dp[i] %= MOD;
        }
        if (i >= B) {
            dp[i] += dp[i - B];
            dp[i] %= MOD;
        }
    }

    cout << dp[N] << endl;
    
    return 0;
}