#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;
const int MOD = 998244353;

int main() {
    // Read input
    int N;
    cin >> N;
    
    vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i];
    }
    
    // Calculate the sum of probabilities S
    int S = accumulate(A.begin(), A.end(), 0);
    
    // DP table to store the expected number of generations
    vector<vector<int>> dp(N+1, vector<int>(S+1, 0));
    
    // Base case
    dp[0][0] = 1;
    
    // Dynamic programming to calculate the expected number of generations
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j <= S; j++) {
            for (int k = 0; k <= min(j, A[i-1]); k++) {
                dp[i][j] = (dp[i][j] + dp[i-1][j-k] * 1LL * (B[i-1] + k) % MOD) % MOD;
            }
        }
    }
    
    // Calculate the final answer
    int ans = 0;
    for (int i = 0; i <= S; i++) {
        ans = (ans + dp[N][i]) % MOD;
    }
    
    // Print the result
    cout << ans << endl;
    
    return 0;
}