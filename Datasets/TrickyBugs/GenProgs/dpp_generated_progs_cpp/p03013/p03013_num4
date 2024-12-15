#include <iostream>
#include <vector>

const int MOD = 1000000007;

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> broken_steps(M);
    for (int i = 0; i < M; i++) {
        cin >> broken_steps[i];
    }

    vector<int> dp(N + 1, 0);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= N; i++) {
        if (find(broken_steps.begin(), broken_steps.end(), i) != broken_steps.end()) {
            continue;
        }
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }

    cout << dp[N] << endl;

    return 0;
}