#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    // Initialize a 2D table to store the number of ways to select cards
    vector<vector<long long>> dp(N + 1, vector<long long>(N * 50 + 1, 0));

    dp[0][0] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = i; j >= 0; j--) {
            for (int k = cards[i]; k <= N * 50; k++) {
                dp[j + 1][k] += dp[j][k - cards[i]];
            }
        }
    }

    long long ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += dp[i][i * A];
    }

    cout << ans << endl;

    return 0;
}