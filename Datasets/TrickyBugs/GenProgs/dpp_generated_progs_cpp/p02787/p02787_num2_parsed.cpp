#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int H, N;
    cin >> H >> N;

    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }

    vector<int> dp(H + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j <= H; j++) {
            if (dp[j] != INT_MAX) {
                int next_health = max(0, j - A[i]);
                dp[next_health] = min(dp[next_health], dp[j] + B[i]);
            }
        }
    }

    cout << dp[0] << endl;

    return 0;
}