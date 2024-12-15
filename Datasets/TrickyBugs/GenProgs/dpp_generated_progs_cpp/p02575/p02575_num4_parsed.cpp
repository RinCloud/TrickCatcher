#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    // Create a 2D grid to store the blocked squares
    vector<vector<bool>> blocked(H, vector<bool>(W, false));

    // Read the blocked squares
    for (int i = 0; i < H; i++) {
        int A, B;
        cin >> A >> B;

        // Mark the blocked squares as true
        for (int j = A - 1; j < B; j++) {
            blocked[i][j] = true;
        }
    }

    // Create a 2D vector to store the minimum number of moves
    vector<vector<int>> dp(H, vector<int>(W, INT_MAX));

    // Initialize the first row with 0 moves
    for (int j = 0; j < W; j++) {
        dp[0][j] = 0;
    }

    // Calculate the minimum number of moves for each row
    for (int i = 1; i < H; i++) {
        // Calculate the minimum number of moves for each column
        for (int j = 0; j < W; j++) {
            // If the square is blocked, skip it
            if (blocked[i][j]) {
                continue;
            }

            // Calculate the minimum number of moves from the previous row
            for (int k = 0; k < W; k++) {
                if (blocked[i - 1][k]) {
                    continue;
                }

                // Calculate the number of moves to reach the current square
                int moves = dp[i - 1][k] + abs(j - k) + 1;

                // Update the minimum number of moves if necessary
                dp[i][j] = min(dp[i][j], moves);
            }
        }
    }

    // Print the minimum number of moves for each row
    for (int i = 0; i < H; i++) {
        // If none of the squares in the (k+1)-th row can be reached, print -1
        if (dp[i].empty() || *min_element(dp[i].begin(), dp[i].end()) == INT_MAX) {
            cout << -1 << endl;
        } else {
            // Print the minimum number of moves
            cout << *min_element(dp[i].begin(), dp[i].end()) << endl;
        }
    }

    return 0;
}