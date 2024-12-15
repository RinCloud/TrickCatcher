#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int N, M;
    cin >> N >> M;

    vector<bool> broken(N + 1, false);
    for (int i = 0; i < M; i++) {
        int a;
        cin >> a;
        broken[a] = true;
    }

    vector<int> dp(N + 1);
    dp[0] = 1;
    for (int i = 1; i <= N; i++) {
        if (broken[i]) {
            dp[i] = 0;
        } else {
            dp[i] = (dp[i - 1] + dp[i - 2]) % MOD;
        }
    }

    cout << dp[N] << endl;

    return 0;
}