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
        for (int j = A[i]; j <= H; j++) {
            if (dp[j - A[i]] != INT_MAX) {
                dp[j] = min(dp[j], dp[j - A[i]] + B[i]);
            }
        }
    }

    cout << dp[H] << endl;

    return 0;
}
