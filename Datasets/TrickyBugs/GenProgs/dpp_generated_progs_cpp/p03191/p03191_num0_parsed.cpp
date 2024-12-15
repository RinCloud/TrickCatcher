#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main() {
    int N;
    cin >> N;

    vector<int> A(2*N);
    for (int i = 0; i < 2*N; ++i) {
        cin >> A[i];
    }

    vector<vector<long long>> dp(N+1, vector<long long>(N+1, 0));
    dp[0][0] = 1;

    int count_minus_one = count(A.begin(), A.end(), -1);
    int count_removed = 0;
    for (int i = 1; i <= 2*N; ++i) {
        if (A[i-1] == -1) {
            ++count_removed;
        } else {
            dp[count_removed][count_minus_one - count_removed] = 0;
        }
    }

    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= N; ++j) {
            if (i > 0) {
                dp[i][j] += dp[i-1][j];
                dp[i][j] %= MOD;
            }
            if (j > 0) {
                dp[i][j] += dp[i][j-1];
                dp[i][j] %= MOD;
            }
        }
    }

    long long ans = dp[N][N];
    for (int i = 2; i <= N; i += 2) {
        ans *= i;
        ans %= MOD;
    }

    cout << ans << endl;

    return 0;
}