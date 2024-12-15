#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> broken_steps(M);
    for (int i = 0; i < M; i++) {
        cin >> broken_steps[i];
    }

    vector<long long> dp(N + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= N; i++) {
        if (i >= 1 && find(broken_steps.begin(), broken_steps.end(), i) == broken_steps.end()) {
            dp[i] += dp[i - 1];
            dp[i] %= MOD;
        }
        if (i >= 2 && find(broken_steps.begin(), broken_steps.end(), i - 1) == broken_steps.end()) {
            dp[i] += dp[i - 2];
            dp[i] %= MOD;
        }
    }

    cout << dp[N] << endl;

    return 0;
}