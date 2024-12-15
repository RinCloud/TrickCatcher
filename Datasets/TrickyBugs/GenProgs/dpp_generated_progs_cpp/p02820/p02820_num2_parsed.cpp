#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int R, S, P;
    cin >> R >> S >> P;
    string T;
    cin >> T;

    vector<int> dp(N);
    for (int i = 0; i < N; i++) {
        if (i < K || T[i] == T[i - K]) {
            if (T[i] == 'r') dp[i] = P;
            if (T[i] == 's') dp[i] = R;
            if (T[i] == 'p') dp[i] = S;
        } else {
            if (T[i] == 'r') dp[i] = max(dp[i - K] + P, dp[i]);
            if (T[i] == 's') dp[i] = max(dp[i - K] + R, dp[i]);
            if (T[i] == 'p') dp[i] = max(dp[i - K] + S, dp[i]);
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += dp[i];
    }

    cout << ans << endl;

    return 0;
}