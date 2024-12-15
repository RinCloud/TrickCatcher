#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    vector<int> d(N);
    for (int i = 0; i < N; i++) {
        cin >> d[i];
    }

    vector<int> dp(N, 0);
    dp[0] = d[0];
    for (int i = 1; i < N; i++) {
        dp[i] = min(dp[i - 1] + d[i], abs(dp[i - 1] - d[i]));
    }

    int Q;
    cin >> Q;

    vector<int> q(Q);
    for (int i = 0; i < Q; i++) {
        cin >> q[i];
    }

    vector<string> res(Q);
    for (int i = 0; i < Q; i++) {
        if (dp[q[i] - 1] >= D) {
            res[i] = "NO";
        } else {
            res[i] = "YES";
        }
    }

    for (int i = 0; i < Q; i++) {
        cout << res[i] << endl;
    }

    return 0;
}