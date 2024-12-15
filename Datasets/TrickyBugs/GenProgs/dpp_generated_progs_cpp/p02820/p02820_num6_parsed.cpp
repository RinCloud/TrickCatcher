#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int R, S, P;
    cin >> R >> S >> P;
    string T;
    cin >> T;

    vector<int> dp(N, 0);

    for (int i = 0; i < N; i++) {
        if (i >= K && T[i] == T[i-K] && dp[i-K] > 0) {
            dp[i] = dp[i-K];
        } else {
            if (T[i] == 'r') {
                dp[i] = P;
            } else if (T[i] == 's') {
                dp[i] = R;
            } else if (T[i] == 'p') {
                dp[i] = S;
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += dp[i];
    }

    cout << ans << endl;

    return 0;
}