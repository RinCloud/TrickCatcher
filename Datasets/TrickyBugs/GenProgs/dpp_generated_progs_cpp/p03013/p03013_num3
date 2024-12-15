#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> brokenSteps(M);
    for (int i = 0; i < M; i++) {
        cin >> brokenSteps[i];
    }

    vector<int> dp(N + 1);
    dp[0] = 1;
    dp[1] = 1;

    for (int i = 2; i <= N; i++) {
        if (find(brokenSteps.begin(), brokenSteps.end(), i) != brokenSteps.end()) {
            continue;
        }
        dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
    }

    cout << dp[N] << endl;

    return 0;
}