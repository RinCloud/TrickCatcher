#include <iostream>
#include <vector>
using namespace std;

const long long MOD = 1e9 + 7;

// Function to calculate the number of paths
long long calculatePaths(int H, int W, int K) {
    // Initialize a 2D vector to store the number of paths
    vector<vector<long long>> dp(H + 1, vector<long long>(W + 1));

    // Initialize dp[0][K] to 1 since we start from the top of the Kth vertical line
    dp[0][K] = 1;

    // Iterate through each horizontal line
    for (int i = 1; i <= H; i++) {
        // Iterate through each vertical line
        for (int j = 1; j <= W; j++) {
            // If there is a horizontal line between vertical lines j-1 and j, update the number of paths
            dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            dp[i][j] %= MOD;
        }
    }

    // Return the number of paths to the bottom of the Wth vertical line
    return dp[H][W];
}

int main() {
    int H, W, K;
    cin >> H >> W >> K;

    // Calculate the number of paths
    long long numOfPaths = calculatePaths(H, W, K);

    // Print the result
    cout << numOfPaths << endl;

    return 0;
}