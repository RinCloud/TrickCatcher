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

    vector<int> prefixSum(3 * N + 1);
    for (int i = 1; i <= 3 * N; i++) {
        prefixSum[i] = prefixSum[i - 1] + A[i - 1];
    }

    vector<int> dp(N + 1);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            int k = 3 * (i - j);
            dp[i] = max(dp[i], dp[i - j] + prefixSum[3 * N] - prefixSum[k]);
        }
    }

    cout << dp[N] << endl;

    return 0;
}