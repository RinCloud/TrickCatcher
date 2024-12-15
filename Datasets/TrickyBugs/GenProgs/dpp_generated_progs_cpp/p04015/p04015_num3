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

    // dp[i][s][k] represents the number of ways to select 'k' cards from the first 'i' cards
    // such that their sum is 's'.
    vector<vector<vector<long long>>> dp(N + 1, vector<vector<long long>>(N * 50 + 1, vector<long long>(N + 1, 0)));

    dp[0][0][0] = 1;

    for (int i = 1; i <= N; i++) {
        for (int s = 0; s <= i * 50; s++) {
            for (int k = 0; k <= i; k++) {
                dp[i][s][k] = dp[i - 1][s][k];
                if (s >= cards[i - 1] && k >= 1) {
                    dp[i][s][k] += dp[i - 1][s - cards[i - 1]][k - 1];
                }
            }
        }
    }

    long long ans = 0;

    for (int k = 1; k <= N; k++) {
        ans += dp[N][A * k][k];
    }

    cout << ans << endl;

    return 0;
}