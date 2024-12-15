#include <bits/stdc++.h>
using namespace std;

const int mod = 998244353;

int main() {
    // Read the input values
    int N, S;
    cin >> N >> S;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    // Initialize the dp array
    vector<vector<int>> dp(N, vector<int>(S + 1, 0));
    
    // Base case
    if (A[0] <= S) {
        dp[0][A[0]] = 1;
    }
    
    // Dynamic programming
    for (int i = 1; i < N; i++) {
        for (int j = 0; j <= S; j++) {
            dp[i][j] = (dp[i][j] + dp[i - 1][j]) % mod;
            if (j >= A[i]) {
                dp[i][j] = (dp[i][j] + dp[i - 1][j - A[i]]) % mod;
            }
        }
    }
    
    // Calculate the sum of f(L, R)
    int sum = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            sum = (sum + dp[j][S]) % mod;
        }
    }
    
    // Print the result
    cout << sum << endl;

    return 0;
}