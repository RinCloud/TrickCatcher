#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(3 * N);
    for (int i = 0; i < 3 * N; i++) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    vector<int> prefixSum(3 * N + 1, 0);
    for (int i = 0; i < 3 * N; i++) {
        prefixSum[i + 1] = prefixSum[i] + A[i];
    }

    vector<vector<int>> dp(N + 1, vector<int>(N + 1, 0));
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= i; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j > 0) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + A[3 * (i - 1) + j - 1] - prefixSum[3 * (i - 1) + j - 1]);
            }
        }
    }

    int result = 0;
    for (int i = 0; i <= N; i++) {
        result = max(result, dp[N][i]);
    }
    cout << result << endl;

    return 0;
}