#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    vector<int> cards(N);
    for (int i = 0; i < N; i++) {
        cin >> cards[i];
    }

    // dp[i][j][k] represents the number of ways to select j cards from the first i cards
    // such that the sum of the selected cards is k.
    vector<vector<vector<long long>>> dp(N + 1, vector<vector<long long>>(N + 1, vector<long long>(N * 50 + 1, 0)));
    dp[0][0][0] = 1;  // Base case

    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= N; j++) {
            for (int k = 0; k <= N * 50; k++) {
                dp[i][j][k] = dp[i - 1][j][k];  // Exclude the i-th card

                if (j >= 1 && k >= cards[i - 1]) {
                    dp[i][j][k] += dp[i - 1][j - 1][k - cards[i - 1]];  // Include the i-th card
                }
            }
        }
    }

    long long count = 0;
    for (int j = 1; j <= N; j++) {
        count += dp[N][j][A * j];
    }

    cout << count << endl;

    return 0;
}