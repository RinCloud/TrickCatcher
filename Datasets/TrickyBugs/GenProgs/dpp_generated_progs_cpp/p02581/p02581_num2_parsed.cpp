#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> cards(3 * N);
    for (int i = 0; i < 3 * N; i++) {
        cin >> cards[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(N + 1)); // dp[i][j] represents the maximum score after using i operations and having j equal cards left

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            int k = i - j;
            if (k >= 0 && k <= j) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j] + (cards[3 * (i - 1)] == cards[3 * (i - 1) + 2] ? 1 : 0));
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + (cards[3 * (i - 1)] == cards[3 * (i - 1) + 2] ? 1 : 0));
                if (j > 1) {
                  dp[i][j] = max(dp[i][j], dp[i - 1][j - 2] + (cards[3 * (i - 1)] == cards[3 * (i - 1) + 2] ? 1 : 0));
                }
                if (j < N) {
                  dp[i][j] = max(dp[i][j], dp[i - 1][j + 1] + (cards[3 * (i - 1)] == cards[3 * (i - 1) + 2] ? 1 : 0));
                  dp[i][j] = max(dp[i][j], dp[i - 1][j + 2] + (cards[3 * (i - 1)] == cards[3 * (i - 1) + 2] ? 1 : 0));
                }
            }
        }
    }

    int maxPoints = 0;
    for (int j = 0; j <= N; j++) {
        maxPoints = max(maxPoints, dp[N][j]);
    }

    cout << maxPoints << endl;

    return 0;
}