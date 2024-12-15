#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Read input
    int H, W, K;
    cin >> H >> W >> K;

    // Create a 2D vector to represent the vertical lines and horizontal lines
    vector<vector<int>> amidakuji(W + 1, vector<int>(H + 1, 0));

    // Initialize the first column of the 2D vector
    for (int i = 1; i <= H; i++) {
        amidakuji[0][i] = 1;
    }

    // Iterate over each vertical line
    for (int j = 1; j <= W; j++) {
        // Check if the current vertical line is the target line
        bool isTargetLine = (j == K);

        // Iterate over each horizontal line
        for (int i = 1; i <= H; i++) {
            // Case 1: The current horizontal line connects the vertical line with the one on its left
            amidakuji[j][i] = amidakuji[j - 1][i - 1] * amidakuji[j - 1][i - 1];

            // Case 2: The current horizontal line connects the vertical line with the one on its right
            if (i + 1 <= H) {
                amidakuji[j][i] += amidakuji[j - 1][i + 1] * amidakuji[j - 1][i + 1];
            }

            // Case 3: The current horizontal line connects the vertical line with itself
            amidakuji[j][i] += amidakuji[j - 1][i] * amidakuji[j - 1][i];

            // Take the modulo 1,000,000,007
            amidakuji[j][i] %= 1000000007;

            // If the current vertical line is the target line, sum all the possibilities in the last row
            if (isTargetLine) {
                amidakuji[j][H] += amidakuji[j][i];
                amidakuji[j][H] %= 1000000007;
            }
        }
    }

    // Print the result
    cout << amidakuji[W][H] << endl;

    return 0;
}