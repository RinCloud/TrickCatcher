#include <iostream>
#include <vector>
using namespace std;

long long countWays(int N, vector<vector<int>>& A, vector<vector<long long>>& dp, int mask) {
    // Base case: If all pairs are formed, return 1
    if (mask == (1 << (2 * N)) - 1) {
        return 1;
    }
    
    // If dp state is already calculated, return the value
    if (dp[mask][N] != -1) {
        return dp[mask][N];
    }
    
    long long ways = 0;
    
    // Find the first point that is not paired yet
    int i = 0;
    while ((mask & (1 << i)) != 0) {
        i++;
    }
    
    // Pair the point with all other unpaired points satisfying the conditions
    for (int j = i + 1; j < 2 * N; j++) {
        if (((mask & (1 << j)) == 0) && A[i][j] == 1) {
            ways += countWays(N - 1, A, dp, mask | (1 << i) | (1 << j));
        }
    }
    
    // Memorize the calculated value in dp table
    dp[mask][N] = ways;
    
    return ways;
}

int main() {
    // Read input
    int N;
    cin >> N;
    
    // Initialize A matrix
    vector<vector<int>> A(2 * N, vector<int>(2 * N));
    for (int i = 0; i < 2 * N; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < 2 * N; j++) {
            A[i][j] = row[j] - '0';
        }
    }
    
    // Initialize dp table
    vector<vector<long long>> dp(1 << (2 * N), vector<long long>(N + 1, -1));
    
    // Count the number of ways to divide the points into pairs
    long long ways = countWays(N, A, dp, 0);
    
    // Print the result
    cout << ways << endl;
    
    return 0;
}