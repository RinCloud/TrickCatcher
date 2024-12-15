#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    // Calculate the longest consecutive zeros that can be made
    int max_zeros = (N - B) / (A + B);

    // Use a dynamic programming approach to count the different strings
    vector<vector<int>> dp(N + 1, vector<int>(max_zeros + 1));
    dp[0][0] = 1;

    for (int i = A; i <= N; i++) {
        for (int j = 0; j <= max_zeros; j++) {
            dp[i][j] = dp[i - 1][j];

            if (i >= B && j > 0) {
                dp[i][j] += dp[i - B][j - 1];
                dp[i][j] %= MOD;
            }
        }
    }

    // Sum up all the possible combinations of zeros and ones
    int result = 0;
    for (int j = 0; j <= max_zeros; j++) {
        result += dp[N][j];
        result %= MOD;
    }

    cout << result << endl;

    return 0;
}