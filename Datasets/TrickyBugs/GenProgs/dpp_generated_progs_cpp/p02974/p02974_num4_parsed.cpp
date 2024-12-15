#include<iostream>
#include<vector>
using namespace std;

const int MOD = 1000000007;

// Function to calculate factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = (fact * i) % MOD;
    }
    return fact;
}

// Function to calculate number of permutations of oddness k
int countPermutations(int n, int k) {
    // Initialize dynamic programming table
    vector<vector<int>> dp(n + 1, vector<int>(k + 1, 0));

    // Base cases
    dp[0][0] = 1;

    // Fill up the dynamic programming table
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            for (int p = 1; p <= i; p++) {
                if (j - abs(i - p) >= 0) {
                    dp[i][j] = (dp[i][j] + dp[i - 1][j - abs(i - p)]) % MOD;
                }
            }
        }
    }

    // Return the answer
    return dp[n][k];
}

int main() {
    int n, k;
    cin >> n >> k;

    // Count number of permutations
    int permutations = countPermutations(n, k);

    // Print the answer
    cout << permutations << endl;

    return 0;
}