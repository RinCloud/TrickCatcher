#include <iostream>
#include <vector>
#include <bitset>

using namespace std;

const int MOD = 998244353;

int main() {
    int N;
    string X;
    vector<string> A;

    cin >> N >> X;

    for (int i = 0; i < N; i++) {
        string ai;
        cin >> ai;
        A.push_back(ai);
    }

    int n = X.size();
    int m = N; // Number of integers on the blackboard
    vector<string> B(m);
    for (int i = 0; i < m; i++) {
        B[i] = A[i];
    }

    // Get the binary representation of X
    bitset<4000> x_bs(X);
    string x_binary = x_bs.to_string().substr(4000 - n);

    // Calculate the answer using a dynamic programming approach
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0)); // dp[i][j] represents the number of ways to achieve the XOR value j using the first i integers on the blackboard
    dp[0][0] = 1;
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD; // Option 1: Select the i-th integer without performing the XOR operation
            int xor_val = bitset<4000>(B[i - 1]).to_ulong() ^ bitset<4000>(x_binary).to_ulong(); // New XOR value after adding the i-th integer
            if (j != xor_val) {
                dp[i][xor_val] = (dp[i][xor_val] + dp[i - 1][j]) % MOD; // Option 2: Select the i-th integer and perform the XOR operation
            }
        }
    }

    int ans = 0;
    for (int j = 0; j <= n; j++) {
        ans = (ans + dp[m][j]) % MOD;
    }

    cout << ans << endl;

    return 0;
}