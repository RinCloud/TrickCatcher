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

    vector<vector<long long>> dp(N + 1, vector<long long>(A * N + 1));
    dp[0][0] = 1;

    for (int i = 0; i < N; i++) {
        for (int j = i; j >= 0; j--) {
            for (int k = i * A; k >= cards[i]; k--) {
                dp[j + 1][k] += dp[j][k - cards[i]];
            }
        }
    }

    long long ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += dp[i][A * i];
    }

    cout << ans << endl;

    return 0;
}