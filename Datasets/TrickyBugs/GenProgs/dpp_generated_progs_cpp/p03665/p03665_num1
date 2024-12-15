#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, P;
    cin >> N >> P;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    // Initialize a 2D DP array
    vector<vector<long long>> dp(N + 1, vector<long long>(2, 0));
    dp[0][0] = 1;

    // Dynamic programming
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= 1; j++) {
            // If selecting the i-th bag
            if (j - A[i - 1] >= 0) {
                dp[i][j] += dp[i - 1][j - A[i - 1]];
            }
            
            // If not selecting the i-th bag
            dp[i][j] += dp[i - 1][j];
        }
    }

    // Print the result
    cout << dp[N][P] << endl;

    return 0;
}