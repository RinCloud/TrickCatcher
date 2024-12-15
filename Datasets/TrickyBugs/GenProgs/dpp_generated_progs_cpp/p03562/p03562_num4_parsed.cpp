#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

const int MOD = 998244353;

int main() {
    int N, X;
    cin >> N >> X;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        A[i] = stoi(s, 0, 2);
    }

    vector<int> dp(X + 1);
    dp[0] = 1;

    for (int i = 0; i < N; i++) {
        vector<int> new_dp(dp);
        unordered_set<int> seen;

        for (int j = 0; j <= X; j++) {
            if (dp[j] == 0 || seen.count(j)) continue;

            int new_val = (j ^ A[i]);
            if (new_val <= X) {
                new_dp[new_val] = (new_dp[new_val] + dp[j]) % MOD;
                seen.insert(new_val);
            }

            int new_val_double = (j << 1);
            if (new_val_double <= X) {
                new_dp[new_val_double] = (new_dp[new_val_double] + dp[j]) % MOD;
                seen.insert(new_val_double);
            }
        }

        dp = new_dp;
    }

    int ans = 0;
    for (int i = 0; i <= X; i++) {
        ans = (ans + dp[i]) % MOD;
    }

    cout << ans << endl;
    return 0;
}